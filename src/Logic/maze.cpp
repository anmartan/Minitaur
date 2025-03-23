#include "maze.hpp"

Maze::Maze(int h, int w): height(h), width(w), cells(h, std::vector<MazeCell>(w))
{
}