#include "investigationtile.h"
#define p std::make_pair

InvestigationTile::InvestigationTile(std::pair<StreetSpace*, StreetSpace*> blockedCells){
    this->blockedCells = blockedCells;
}
