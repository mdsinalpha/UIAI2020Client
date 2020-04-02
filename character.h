#ifndef CHARACTER_H
#define CHARACTER_H
#include <cell.h>
class Cell;

class Character{
protected:
    Character(Cell* cell, bool visible);
    Cell* cell;
    bool visible;
    bool suspect;
public:
    Cell* getCell();
    bool isVisible();
    bool isSuspect();
    void moveTo(Cell* cell);
    void toggleVisibility();
    void exonerate();
};

#endif // CHARACTER_H
