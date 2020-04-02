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
    static Board instance;
    map<Position, Cell*> board;
    map<Position, Tile> tiles;
    vector<StreetSpace*> buildingSites;
    vector<StreetSpace*> metroEntrances;
    vector<StreetSpace*> gasLamps;
    vector<StreetSpace*> parks;
    
};

#endif // BOARD_H
