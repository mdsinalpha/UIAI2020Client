#include "mrsemmagrant.h"
#include "tile.h"
#include "board.h"
#include "algorithm"
#define p std::make_pair

MrsEmmaGrant::MrsEmmaGrant() : Character(StreetSpace::instances[p(10, 7)], true){
    
}

void MrsEmmaGrant::createPark(StreetSpace* cell){
    switch (cell->tile) {
    case BuildingSite:
        std::remove(Board::buildingSites.begin(), Board::buildingSites.end(), cell);
        break;
    case MetroEntrance:
        std::remove(Board::metroEntrances.begin(), Board::metroEntrances.end(), cell);
        break;
    case GasLamp:
        std::remove(Board::gasLamps.begin(), Board::gasLamps.end(), cell);
        break;
    default:
        return;
    }
    cell->tile = Park;
    Board::parks.push_back(cell);
}
