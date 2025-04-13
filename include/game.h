#ifndef GAME_H
#define GAME_H

#include <vector>

class Game {
public:
    Game();
    void printBoard() const;
    bool makeMove(int row, int col, char player);
    char checkWinner() const;
    bool isBoardFull() const;

private:
    std::vector<std::vector<char>> board;
};

#endif