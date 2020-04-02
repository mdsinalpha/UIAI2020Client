#ifndef PORTSPACE_H
#define PORTSPACE_H
#include <cell.h>

class PortSpace : public Cell{
public:
    bool hasSteamer;
    PortSpace(Position position);
    PortSpace(Position position, bool hasSteamer);
};

#endif // PORTSPACE_H
