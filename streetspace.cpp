#include "streetspace.h"

StreetSpace::StreetSpace(Position position, vector<Position> adjacents) : Cell(position, adjacents){
    this->strictTile = false;
}

StreetSpace::StreetSpace(Position position, vector<Position> adjacents, Tile* tile) : Cell(position, adjacents){
    this->tile = tile;
    this->strictTile = false;
}

StreetSpace::StreetSpace(Position position, vector<Position> adjacents, Tile* tile, bool strictTile) : Cell(position, adjacents){
    this->tile = tile;
    this->strictTile = strictTile;
}

StreetSpace::StreetSpace(Position position, vector<Position> adjacents, Character* character) : Cell(position, adjacents, character){
    this->strictTile = false;
}