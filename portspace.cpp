#include "portspace.h"

PortSpace::PortSpace(Position position) : Cell(position){
    this->hasSteamer = false;
}

PortSpace::PortSpace(Position position, bool hasSteamer) : Cell(position){
    this->hasSteamer = hasSteamer;
}

void PortSpace::init(){
    // TODO
}
