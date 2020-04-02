#ifndef INVESTIGATIONTILE_H
#define INVESTIGATIONTILE_H
#include <streetspace.h>
#include <utility>

class InvestigationTile{
private:
    InvestigationTile(std::pair<StreetSpace*, StreetSpace*> blockedCells);
public:
    std::pair<StreetSpace*, StreetSpace*> blockedCells;
    static InvestigationTile instance1;
    static InvestigationTile instance2;
    static void init();
};

#endif // INVESTIGATIONTILE_H
