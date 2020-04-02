#ifndef BOARD_H
#define BOARD_H
#include <position.h>
#include <streetspace.h>
#include <quaysidespace.h>
#include <portspace.h>
#include <map>
#include <vector>

class Board{
private:
    Board();
public:
    static std::map<Position, Cell*> board;
    static std::map<Position, Tile> tiles; 
    static std::vector<StreetSpace*> buildingSites;
    static std::vector<StreetSpace*> metroEntrances;
    static std::vector<StreetSpace*> gasLamps;
    static std::vector<StreetSpace*> parks;
    static void init(){
        
    }
};

#endif // BOARD_H
