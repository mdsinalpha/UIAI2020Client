#include "monkeastman.h"
#include "streetspace.h"
#define p std::make_pair

MonkEastman::MonkEastman() : Character(StreetSpace::instances[p(8, 5)], false){
    
}

void MonkEastman::moveAnotherCharacter(Character* character, Cell* cell){
    character->moveTo(cell);
}
