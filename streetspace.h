#ifndef STREETSPACE_H
#define STREETSPACE_H
#include <cell.h>
#include <tile.h>
#include <position.h>
#include <vector>
#include <map>

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
        
    }
};

#endif // STREETSPACE_H
