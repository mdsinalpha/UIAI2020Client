#include "alfredelybeach.h"
#include "tile.h"
#include "board.h"
#define p std::make_pair

AlfredElyBeach::AlfredElyBeach() : Character(StreetSpace::instances[p(5, 10)], true){
        
}

void AlfredElyBeach::constructMetroEntrance(StreetSpace* cell){
    cell->tile = MetroEntrance;
    Board::metroEntrances.push_back(cell);
}
