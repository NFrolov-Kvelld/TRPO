#include "gtest/gtest.h"
#include "game.h"

TEST(GameTest, MakeMove) {
    Game game;
    ASSERT_TRUE(game.makeMove(0, 0, 'X'));
    ASSERT_FALSE(game.makeMove(0, 0, 'O'));
}

TEST(GameTest, CheckWinner) {
    Game game;
    game.makeMove(0, 0, 'X');
    game.makeMove(0, 1, 'X');
    game.makeMove(0, 2, 'X');
    ASSERT_EQ(game.checkWinner(), 'X');
}

TEST(GameTest, IsBoardFull) {
    Game game;
    ASSERT_FALSE(game.isBoardFull());
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            game.makeMove(i, j, 'X');
        }
    }
    ASSERT_TRUE(game.isBoardFull());
}