#ifndef INVESTIGATIONTILE_H
#define INVESTIGATIONTILE_H
#include <streetspace.h>
#include <bits/stdc++.h>
using namespace std;

class InvestigationTile{
private:
    InvestigationTile(pair<StreetSpace*, StreetSpace*> blockedCells);
public:
    pair<StreetSpace*, StreetSpace*> blockedCells;
    static InvestigationTile instance1;
    static InvestigationTile instance2;
    static void init();
};

#endif // INVESTIGATIONTILE_H
