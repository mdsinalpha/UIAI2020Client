#include "edwardsmith.h"
#include "streetspace.h"
#define p std::make_pair

EdwardSmith::EdwardSmith() : Character(StreetSpace::instances[p(10, 9)], true){
    
}

void EdwardSmith::moveSteamer(PortSpace* from, PortSpace* to){
    from->hasSteamer = false;
    to->hasSteamer = true;
}
