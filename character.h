#ifndef CHARACTER_H
#define CHARACTER_H
#include <cell.h>
class Cell;

class Character{
private:
    Character(Cell* cell, bool isVisible);
protected:
    Cell* cell;
    bool isVisible;
    bool isSuspect;
public:
    void moveTo(Cell* cell);
    void toggleVisibility();
    void exonerate();
};

#endif // CHARACTER_H
