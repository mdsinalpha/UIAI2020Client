#include "character.h"

Character::Character(Cell* cell, bool visible){
    this->cell = cell;
    this->visible = visible;
    this->suspect = true;
}

Cell* Character::getCell(){
    return this->cell;
}

bool Character::isVisible(){
    return this->visible;
}

bool Character::isSuspect(){
    return this->suspect;
}

void Character::moveTo(Cell* cell){
    this->cell = cell;
}

void Character::toggleVisibility(){
    this->visible = !this->visible;
}

void Character::exonerate(){
    this->suspect = false;
}
