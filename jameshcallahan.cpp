#include "jameshcallahan.h"
#define p std::make_pair

JamesHCallahan::JamesHCallahan() : Character(StreetSpace::instances[p(6, 9)], true){
    
}

void JamesHCallahan::moveInvestigationTile(InvestigationTile tile, std::pair<StreetSpace*, StreetSpace*> cells){
    tile.blockedCells = cells;
}

