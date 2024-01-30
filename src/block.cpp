#include "block.h"

Block::Block()
{
    cellSize = 30;
    rotationState = 0;
    colors = GetCellColors();
    rowOffset = 0;
    columnOffset = 0;
}

void Block::Draw()
{
    std::vector<Position> tiles = GetCellPositions();
    for (Position tile : tiles)
    {
        DrawRectangle(tile.column * cellSize + 11, tile.row * cellSize + 11, cellSize - 1, cellSize - 1, colors[id]);
    }
}

void Block::Move(int rows, int columns)
{
    rowOffset += rows;
    columnOffset += columns;
}

void Block::Rotate()
{
    rotationState++;
    if (rotationState == (int)cells.size())
    {
        rotationState = 0;
    }
}

void Block::UndoRotation()
{
    rotationState--;
    if (rotationState == -1)
    {
        rotationState = cells.size() -1;
    }
}

std::vector<Position> Block::GetCellPositions()
{
    std::vector<Position> tiles = cells[rotationState];
    std::vector<Position> movedTiles;
    for (Position tile : tiles)
    {
        Position newPos = Position(tile.row + rowOffset, tile.column + columnOffset);
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}