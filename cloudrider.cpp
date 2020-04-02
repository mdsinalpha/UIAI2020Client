#include "cloudrider.h"
#include "tile.h"
#include "board.h"
#define p std::make_pair


CloudRider::CloudRider() : Character(StreetSpace::instances[p(9, 8)], true){
    
}

void CloudRider::constructBuildingSite(StreetSpace* cell){
    cell->tile = BuildingSite;
    Board::buildingSites.push_back(cell);
}
