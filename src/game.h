#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    Grid grid;

private:
    std::vector<Block> blocks;

};