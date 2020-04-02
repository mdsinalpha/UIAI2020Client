#include "character.h"

Character::Character(Cell* cell, bool isVisible){
    this->cell = cell;
    this->isVisible = isVisible;
    this->isSuspect = true;
}

void Character::moveTo(Cell* cell){
    this->cell = cell;
}

void Character::toggleVisibility(){
    this->isVisible = !this->isVisible;
}

void Character::exonerate(){
    this->isSuspect = false;
}
