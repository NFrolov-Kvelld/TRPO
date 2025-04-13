#include "game.h"
#include <iostream>

Game::Game() : board(3, std::vector<char>(3, ' ')) {}

void Game::printBoard() const {
    for (const auto& row : board) {
        for (char cell : row) {
            std::cout << cell << " | ";
        }
        std::cout << std::endl;
        std::cout << "---------" << std::endl;
    }
}

bool Game::makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
        return false;
    }
    board[row][col] = player;
    return true;
}

char Game::checkWinner() const {
    // Проверка строк
    for (const auto& row : board) {
        if (row[0] == row[1] && row[1] == row[2] && row[0] != ' ') {
            return row[0];
        }
    }

    // Проверка столбцов
    for (int col = 0; col < 3; ++col) {
        if (board[0][col] == board[1][col] && board[1][col] == board[2][col] && board[0][col] != ' ') {
            return board[0][col];
        }
    }

    // Проверка диагоналей
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return board[0][2];
    }

    return ' ';
}

bool Game::isBoardFull() const {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false;
            }
        }
    }
    return true;
}