#ifndef CELL_H
#define CELL_H
#include <position.h>
#include <character.h>
class Character;
#include <vector>

class Cell{
public:
    Position position;
    std::vector<Position> adjacents;
    Character* character;
    Cell(Position position);
    Cell(Position position, std::vector<Position> adjacents);
    Cell(Position position, std::vector<Position> adjacents, Character* character);
};

#endif // CELL_H
