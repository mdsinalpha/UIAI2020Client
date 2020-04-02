#include "lewishowardlatimer.h"
#include "tile.h"
#include "board.h"
#define p std::make_pair

LewisHowardLatimer::LewisHowardLatimer() : Character(StreetSpace::instances[p(5, 8)], true){
    
}

void LewisHowardLatimer::installGasLamp(StreetSpace* cell){
    cell->tile = GasLamp;
    Board::gasLamps.push_back(cell);
}
