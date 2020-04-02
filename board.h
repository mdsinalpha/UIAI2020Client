#ifndef BOARD_H
#define BOARD_H
#include <position.h>
#include <streetspace.h>
#include <quaysidespace.h>
#include <portspace.h>
#include <bits/stdc++.h>
using namespace std;

class Board{
private:
    Board();
public:
    const static Board instance;
    map<Position, Tile> tiles;
    map<Position, StreetSpace*> streetSpaceMap;
    map<Position, QuaysideSpace*> quaysideSpaceMap;
    map<Position, PortSpace*> portSpaceMap;
    map<Position, Cell*> allMap;
};

#endif // BOARD_H
