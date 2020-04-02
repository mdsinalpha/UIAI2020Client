#ifndef GASLAMP_H
#define GASLAMP_H
#include <tile.h>

class GasLamp : public Tile{
private:
    GasLamp();
public:
    const static GasLamp instance;
};

#endif // GASLAMP_H
