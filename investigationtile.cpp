#include "investigationtile.h"
#define p make_pair

InvestigationTile::InvestigationTile(pair<StreetSpace*, StreetSpace*> blockedCells){
    this->blockedCells = blockedCells;
}

void InvestigationTile::init(){
    // TODO
}
