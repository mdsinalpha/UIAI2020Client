#ifndef METROENTRANCE_H
#define METROENTRANCE_H
#include <tile.h>

class MetroEntrance : public Tile{
public:
    const static MetroEntrance instance;
    MetroEntrance();
};

#endif // METROENTRANCE_H
