#include "libertyisland.h"
#define p make_pair

vector<Position> adjacents(){
    vector<Position> adjacents;
    adjacents.push_back(p(7, 2));
    adjacents.push_back(p(5, 16));
    return adjacents;
}

LibertyIsland::LibertyIsland() : Cell(p(0, 0), adjacents){
    
}
