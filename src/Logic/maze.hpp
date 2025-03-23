#pragma once
#include <vector>

struct MazeCell
{
    bool north = true;
    bool south = true;
    bool west = true;
    bool east = true;
};


class Maze
{
public:
    Maze(int height, int width);
    
private:
    int height, width;
    std::vector<std::vector<MazeCell>> cells;
};