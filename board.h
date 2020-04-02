#ifndef BOARD_H
#define BOARD_H
#include <position.h>
#include <streetspace.h>
#include <quaysidespace.h>
#include <portspace.h>
#include <map>
#include <vector>
#include <tile.h>

class Board{
private:
    Board();
public:
    static std::vector<StreetSpace*> buildingSites;
    static std::vector<StreetSpace*> metroEntrances;
    static std::vector<StreetSpace*> gasLamps;
    static std::vector<StreetSpace*> parks;
    static std::map<Position, Cell*> map;
    static void init(){
        
    }
    static std::map<Position, Tile> tiles(){
        std::map<Position, Tile> tiles;
//        for(StreetSpace* it : buildingSites)
//            tiles[it->position] = BuildingSite;
//        for(StreetSpace* it : metroEntrances)
//            tiles[it->position] = MetroEntrance;
//        for(StreetSpace* it : gasLamps)
//            tiles[it->position] = GasLamp;
//        for(StreetSpace* it : parks)
//            tiles[it->position] = Park;
        return tiles;
    }
};

#endif // BOARD_H
