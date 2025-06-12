#include "Puzzle.hpp"
#include <iostream>

Puzzle::Puzzle() {
    question = "What comes next in the sequence: 2, 4, 8, 16, ?";
    answer = "32";
    solved = false;
}

bool Puzzle::ask() {
    std::string userInput;
    std::cout << "Puzzle: " << question << "\nYour answer: ";
    std::cin >> userInput;
    return userInput == answer;
}

void Puzzle::solve() {
    solved = true;
}

bool Puzzle::isSolved() const {
    return solved;
}
