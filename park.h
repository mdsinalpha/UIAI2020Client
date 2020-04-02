#ifndef PARK_H
#define PARK_H
#include <tile.h>

class Park : public Tile{
public:
    const static Park instance;
    Park();
};

#endif // PARK_H
