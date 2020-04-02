#ifndef BOARD_H
#define BOARD_H
#include <position.h>
#include <streetspace.h>
#include <quaysidespace.h>
#include <portspace.h>
#include <libertyisland.h>
#include <landexit.h>
#include <map>
#include <vector>
#include <tile.h>
#include <investigationtile.h>

class Board{
private:
    Board();
public:
    static std::map<Position, Cell*> map;
    static std::vector<StreetSpace*> buildingSites;
    static std::vector<StreetSpace*> metroEntrances;
    static std::vector<StreetSpace*> gasLamps;
    static std::vector<StreetSpace*> parks;
    static void init(){
        StreetSpace::init();
        QuaysideSpace::init();
        PortSpace::init();
//        for(std::pair<Position, StreetSpace*> it : StreetSpace::instances)
//            Board::map[it.first] = it.second;
//        for(std::pair<Position, QuaysideSpace*> it : QuaysideSpace::instances)
//            Board::map[it.first] = it.second;
//        for(std::pair<Position, PortSpace*> it : PortSpace::instances)
//            Board::map[it.first] = it.second;
        Board::map[LibertyIsland::instance.position] = &LibertyIsland::instance;
        Board::map[LandExit::instance.position] = &LandExit::instance;
        InvestigationTile::init();
        
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
