#include "libertyisland.h"
#define p std::make_pair

std::vector<Position> adjacents(){
    std::vector<Position> adjacents;
    adjacents.push_back(p(7, 2));
    adjacents.push_back(p(5, 16));
    return adjacents;
}

LibertyIsland::LibertyIsland() : Cell(p(0, 0), adjacents){
    
}
