#include "streetspace.h"

StreetSpace::StreetSpace(Position position, std::vector<Position> adjacents) : Cell(position, adjacents){
    this->strictTile = false;
}

StreetSpace::StreetSpace(Position position, std::vector<Position> adjacents, Tile tile) : Cell(position, adjacents){
    this->tile = tile;
    this->strictTile = false;
}

StreetSpace::StreetSpace(Position position, std::vector<Position> adjacents, Tile tile, bool strictTile) : Cell(position, adjacents){
    this->tile = tile;
    this->strictTile = strictTile;
}

StreetSpace::StreetSpace(Position position, std::vector<Position> adjacents, Character* character) : Cell(position, adjacents, character){
    this->strictTile = false;
}

std::map<Position, StreetSpace*> StreetSpace::instances;
