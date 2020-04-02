#ifndef STREETSPACE_H
#define STREETSPACE_H
#include <cell.h>
#include <tile.h>
#include <position.h>
#include <vector>
#include <map>
#include <set>

class StreetSpace : public Cell{
private:
    StreetSpace(Position position, std::vector<Position> adjacents);
    StreetSpace(Position position, std::vector<Position> adjacents, Tile tile);
    StreetSpace(Position position, std::vector<Position> adjacents, Tile tile, bool strictTile);
    StreetSpace(Position position, std::vector<Position> adjacents, Character* character);
public:
    Tile tile;
    bool strictTile;
    static std::map<Position, StreetSpace*> instances;
    static void init(){
        int lo[15]{0, 8, 7, 6, 5, 2, 3, 2, 3, 2, 3, 2, 1, 2, 11};
        int hi[15]{0, 10, 13, 14, 15, 16, 15, 16, 13, 12, 13, 16, 15, 16};
        std::set<Position> bl;
        
        
    }
};

#endif // STREETSPACE_H
