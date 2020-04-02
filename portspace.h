#ifndef PORTSPACE_H
#define PORTSPACE_H
#include <cell.h>
#include <map>
#define p std::make_pair

class PortSpace : public Cell{
private:
    PortSpace(Position position);
    PortSpace(Position position, bool hasSteamer);
public:
    bool hasSteamer;
    static std::map<Position, PortSpace*> instances;
    static void init(){
        instances[p(2, 13)] = new PortSpace(p(2, 13));
        instances[p(5, 2)] = new PortSpace(p(5, 2), true);
        instances[p(7, 16)] = new PortSpace(p(7, 16));
        instances[p(11, 16)] = new PortSpace(p(11, 16), true);
        instances[p(12, 1)] = new PortSpace(p(12, 1));
    }
};

#endif // PORTSPACE_H
