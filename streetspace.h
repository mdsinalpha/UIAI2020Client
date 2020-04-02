#ifndef STREETSPACE_H
#define STREETSPACE_H
#include <cell.h>
#include <tile.h>
#include <position.h>
#include <bits/stdc++.h>
using namespace std;

class StreetSpace : public Cell{
private:
    StreetSpace(Position position, vector<Position> adjacents);
    StreetSpace(Position position, vector<Position> adjacents, Tile* tile);
    StreetSpace(Position position, vector<Position> adjacents, Tile* tile, bool strictTile);
    StreetSpace(Position position, vector<Position> adjacents, Character* character);
public:
    Tile* tile;
    bool strictTile;
    static map<Position, StreetSpace*> instances;
    static void init();
};

#endif // STREETSPACE_H
