#pragma once
#include "Puzzle.hpp"
#include <map>
#include <vector>
#include <string>

class Maze {
public:
    Maze(const std::string& filename);
    void display(std::pair<int, int> playerPos) const;
    bool isWall(int x, int y) const;
    bool isGoal(std::pair<int, int> pos) const;
    std::pair<int, int> getStart() const;
    bool hasPuzzle(std::pair<int, int> pos) const;
    Puzzle& getPuzzle(std::pair<int, int> pos);

private:
    std::vector<std::string> grid;
    std::pair<int, int> start;
    std::pair<int, int> goal;
    std::map<std::pair<int, int>, Puzzle> puzzles;
};
