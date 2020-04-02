#ifndef PARK_H
#define PARK_H
#include <tile.h>

class Park : public Tile{
private: 
    Park();
public:
    const static Park instance;
};

#endif // PARK_H
