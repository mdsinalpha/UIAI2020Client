#include <board.h>

std::vector<StreetSpace*> Board::buildingSites;
std::vector<StreetSpace*> Board::metroEntrances;
std::vector<StreetSpace*> Board::gasLamps;
std::vector<StreetSpace*> Board::parks;
std::map<Position, Cell*> Board::map;
