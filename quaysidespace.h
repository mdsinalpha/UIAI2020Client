#ifndef QUAYSIDESPACE_H
#define QUAYSIDESPACE_H
#include <cell.h>

class QuaysideSpace : public Cell{
public:
    QuaysideSpace(Position position, vector<Position> adjacents);
};

#endif // QUAYSIDESPACE_H
