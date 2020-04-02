#include "cell.h"

Cell::Cell(Position position){
    this->position = position;
}

Cell::Cell(Position position, std::vector<Position> adjacents){
    this->position = position;
    this->adjacents = adjacents;
}

Cell::Cell(Position position, std::vector<Position> adjacents, Character* character){
    this->position = position;
    this->adjacents = adjacents;
    this->character = character;
}
