#ifndef STREETSPACE_H
#define STREETSPACE_H
#include <cell.h>
#include <tile.h>
#include <position.h>
#include <vector>
#include <map>
#define p std::make_pair

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
        int lo[15]{0, 10, 7, 8, 5, 4, 3, 4, 3, 2, 3, 2, 3, 2, 0};
        int alo[15]{0, 8, 7, 6, 5, 2, 3, 2, 3, 2, 3, 2, 1, 2, 11};
        int hi[15]{0, 10, 11, 14, 15, 14, 15, 14, 13, 12, 13, 14, 15, 16, 0};
        int ahi[15]{0, 10, 13, 14, 15, 16, 15, 16, 13, 12, 13, 16, 15, 16, 11};
        Position stricts[7]{p(4, 9), p(4, 11), p(7, 8), p(10, 5), p(10, 11), p(11, 6), p(11, 10)}; 
        
        
        
    }
};

#endif // STREETSPACE_H
