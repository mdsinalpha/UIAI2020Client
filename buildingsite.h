#ifndef BUILDINGSITE_H
#define BUILDINGSITE_H
#include <tile.h>

class BuildingSite : public Tile{
public:
    const static BuildingSite instance;
    BuildingSite();
};

#endif // BUILDINGSITE_H
