#ifndef QUAYSIDESPACE_H
#define QUAYSIDESPACE_H
#include <cell.h>
#include <map>

class QuaysideSpace : public Cell{
private:
    QuaysideSpace(Position position, std::vector<Position> adjacents);
public:
    static std::map<Position, QuaysideSpace*> instances;
    static void init();
};

#endif // QUAYSIDESPACE_H
