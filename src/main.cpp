#include "Maze.hpp"
#include "Player.hpp"
#include <iostream>

int main() {
    Maze maze("maze.txt"); 
    Player player(maze.getStart());

    std::cout << "Welcome to LogicMaze++! Solve the puzzles to reach the goal.\n\n";

    while (!maze.isGoal(player.getPosition())) {
        maze.display(player.getPosition());

        std::string command;
        std::cout << "\nMove (WASD): ";
        std::cin >> command;

        if (player.move(command[0], maze)) {
            if (maze.hasPuzzle(player.getPosition())) {
                Puzzle& puzzle = maze.getPuzzle(player.getPosition());
                if (!puzzle.isSolved()) {
                    if (!puzzle.ask()) {
                        std::cout << "Incorrect! Try again.\n";
                        continue;
                    }
                    puzzle.solve();
                    std::cout << "Correct! You may proceed.\n";
                }
            }
        } else {
            std::cout << "Invalid move. Try a different direction.\n";
        }
    }

    std::cout << "\n🎉 Congratulations! You've completed the LogicMaze++!\n";
    return 0;
}
