#ifndef GASLAMP_H
#define GASLAMP_H
#include <tile.h>

class GasLamp : public Tile{
public:
    const static GasLamp instance;
    GasLamp();
};

#endif // GASLAMP_H
