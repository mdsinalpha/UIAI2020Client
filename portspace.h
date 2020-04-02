#ifndef PORTSPACE_H
#define PORTSPACE_H
#include <cell.h>

class PortSpace : public Cell{
private:
    PortSpace(Position position);
    PortSpace(Position position, bool hasSteamer);
public:
    bool hasSteamer;
    static map<Position, PortSpace*> instances;
    static void init();
};

#endif // PORTSPACE_H
