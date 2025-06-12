#pragma once
#include <utility>
#include "Maze.hpp"

class Player {
public:
    Player(std::pair<int, int> start);
    bool move(char direction, const Maze& maze);
    std::pair<int, int> getPosition() const;

private:
    std::pair<int, int> position;
};
