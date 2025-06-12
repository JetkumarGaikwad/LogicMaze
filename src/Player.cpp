#include "Player.hpp"

Player::Player(std::pair<int, int> start) {
    position = start;
}

bool Player::move(char direction, const Maze& maze) {
    int x = position.first;
    int y = position.second;
    std::pair<int, int> newPos = position;

    if (direction == 'W' || direction == 'w') newPos.second -= 1;
    else if (direction == 'S' || direction == 's') newPos.second += 1;
    else if (direction == 'A' || direction == 'a') newPos.first -= 1;
    else if (direction == 'D' || direction == 'd') newPos.first += 1;

    if (!maze.isWall(newPos.first, newPos.second)) {
        position = newPos;
        return true;
    }
    return false;
}

std::pair<int, int> Player::getPosition() const {
    return position;
}
