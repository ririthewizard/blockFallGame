#include "game.h"

Game::Game()
{
    grid = Grid();
    blocks = {IBlock(), JBlock(), LBlock(), OBlock(), SBlock(), TBlock(), ZBlock()};
}