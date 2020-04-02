#ifndef STREETSPACE_H
#define STREETSPACE_H
#include <cell.h>
#include <tile.h>
#include <position.h>
#include <bits/stdc++.h>
using namespace std;

class StreetSpace : public Cell{
public:
    Tile* tile;
    bool strictTile;
    StreetSpace(Position position, vector<Position> adjacents);
    StreetSpace(Position position, vector<Position> adjacents, Tile* tile);
    StreetSpace(Position position, vector<Position> adjacents, Tile* tile, bool strictTile);
    StreetSpace(Position position, vector<Position> adjacents, Character* character);
};

#endif // STREETSPACE_H
