#ifndef CELL_H
#define CELL_H
#include <position.h>
#include <character.h>
#include <vector>
using namespace std;

class Cell{
public:
    Position* position;
    vector<Position*> adjacents;
    Character* character;
    Cell(Position* position);
    Cell(Position* position, vector<Position*> adjacents);
    Cell(Position* position, vector<Position*> adjacents, Character* character);
};

#endif // CELL_H
