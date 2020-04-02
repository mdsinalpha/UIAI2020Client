#include "francisjtumblety.h"
#include "streetspace.h"
#define p std::make_pair

FrancisJTumblety::FrancisJTumblety() : Character(StreetSpace::instances[p(8, 11)], false){
    
}

void FrancisJTumblety::hypnotize(Character* adjacent, Character* target){
    Cell* tmp = adjacent->getCell();
    adjacent->moveTo(target->getCell());
    target->moveTo(tmp);
}
