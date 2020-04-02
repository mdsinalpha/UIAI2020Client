#ifndef BUILDINGSITE_H
#define BUILDINGSITE_H
#include <tile.h>

class BuildingSite : public Tile{
private:
    BuildingSite();
public:
    const static BuildingSite instance;
};

#endif // BUILDINGSITE_H
