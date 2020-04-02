#include <board.h>

std::map<Position, Cell*> Board::board;
std::map<Position, Tile> Board::tiles; 
std::vector<StreetSpace*> Board::buildingSites;
std::vector<StreetSpace*> Board::metroEntrances;
std::vector<StreetSpace*> Board::gasLamps;
std::vector<StreetSpace*> Board::parks;
