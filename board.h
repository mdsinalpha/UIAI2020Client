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
    static Board instance;
    std::map<Position, Cell*> board;
    std::map<Position, Tile> tiles; 
    std::vector<StreetSpace*> buildingSites;
    std::vector<StreetSpace*> metroEntrances;
    std::vector<StreetSpace*> gasLamps;
    std::vector<StreetSpace*> parks;
};

#endif // BOARD_H
