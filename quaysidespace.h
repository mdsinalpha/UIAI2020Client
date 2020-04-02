#ifndef QUAYSIDESPACE_H
#define QUAYSIDESPACE_H
#include <cell.h>
#include <map>
#define p std::make_pair


class QuaysideSpace : public Cell{
private:
    QuaysideSpace(Position position, std::vector<Position> adjacents);
public:
    static std::map<Position, QuaysideSpace*> instances;
    static void init(){
        Position pos = p(1, 8);
        std::vector<Position> adj;
        adj.push_back(p(1, 10));
        adj.push_back(p(2, 7));
        adj.push_back(p(2, 9));
        adj.push_back(p(1, 2));
        QuaysideSpace::instances[pos] = new QuaysideSpace(pos, adj);
        pos = p(3, 6);
        adj.clear();
        adj.push_back(p(2, 7));
        adj.push_back(p(3, 8));
        adj.push_back(p(4, 5));
        adj.push_back(p(4, 7));
        adj.push_back(p(1, 2));
        QuaysideSpace::instances[pos] = new QuaysideSpace(pos, adj);
        pos = p(5, 16);
        adj.clear();
        adj.push_back(p(4, 15));
        adj.push_back(p(5, 14));
        adj.push_back(p(6, 15));
        QuaysideSpace::instances[pos] = new QuaysideSpace(pos, adj);
        pos = p(7, 2);
        adj.clear();
        adj.push_back(p(6, 3));
        adj.push_back(p(7, 4));
        adj.push_back(p(8, 3));
        QuaysideSpace::instances[pos] = new QuaysideSpace(pos, adj);
    }
};

#endif // QUAYSIDESPACE_H
