#ifndef METROENTRANCE_H
#define METROENTRANCE_H
#include <tile.h>

class MetroEntrance : public Tile{
private:
    MetroEntrance();
public:
    const static MetroEntrance instance;
};

#endif // METROENTRANCE_H
