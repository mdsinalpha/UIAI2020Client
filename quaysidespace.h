#ifndef QUAYSIDESPACE_H
#define QUAYSIDESPACE_H
#include <cell.h>

class QuaysideSpace : public Cell{
private:
    QuaysideSpace(Position position, vector<Position> adjacents);
public:
    static map<Position, QuaysideSpace*> instances;
    static void init();
};

#endif // QUAYSIDESPACE_H
