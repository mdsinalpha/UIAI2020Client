#ifndef INVESTIGATIONTILE_H
#define INVESTIGATIONTILE_H
#include <streetspace.h>
#include <utility>
#define p std::make_pair

class InvestigationTile{
private:
    InvestigationTile(std::pair<StreetSpace*, StreetSpace*> blockedCells);
public:
    std::pair<StreetSpace*, StreetSpace*> blockedCells;
    static InvestigationTile instance1;
    static InvestigationTile instance2;
    static void init(){
        InvestigationTile::instance1 = p(StreetSpace::instances[p(5, 4)], StreetSpace::instances[p(6, 3)]);
        InvestigationTile::instance2 = p(StreetSpace::instances[p(11, 14)], StreetSpace::instances[p(12, 15)]);
    }
};

#endif // INVESTIGATIONTILE_H
