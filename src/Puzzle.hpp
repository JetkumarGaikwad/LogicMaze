#pragma once
#include <string>

class Puzzle {
public:
    Puzzle();
    bool ask();
    void solve();
    bool isSolved() const;

private:
    std::string question;
    std::string answer;
    bool solved;
};
