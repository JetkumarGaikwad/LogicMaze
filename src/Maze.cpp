#include "Maze.hpp"
#include <fstream>
#include <iostream>

Maze::Maze(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    int y = 0;

    while (std::getline(file, line)) {
        grid.push_back(line);
        for (int x = 0; x < line.size(); ++x) {
            if (line[x] == 'S') start = {x, y};
            if (line[x] == 'G') goal = {x, y};
            if (line[x] == '?') puzzles[{x, y}] = Puzzle();
        }
        y++;
    }
}

void Maze::display(std::pair<int, int> playerPos) const {
    for (int y = 0; y < grid.size(); ++y) {
        for (int x = 0; x < grid[y].size(); ++x) {
            if (playerPos == std::make_pair(x, y)) std::cout << "P";
            else std::cout << grid[y][x];
        }
        std::cout << "\n";
    }
}

bool Maze::isWall(int x, int y) const {
    return grid[y][x] == '#';
}

bool Maze::isGoal(std::pair<int, int> pos) const {
    return pos == goal;
}

std::pair<int, int> Maze::getStart() const {
    return start;
}

bool Maze::hasPuzzle(std::pair<int, int> pos) const {
    return puzzles.find(pos) != puzzles.end();
}

Puzzle& Maze::getPuzzle(std::pair<int, int> pos) {
    return puzzles[pos];
}
