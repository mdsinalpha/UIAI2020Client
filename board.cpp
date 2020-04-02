#include "board.h"
#include "libertyisland.h"
#include "landexit.h"
#include "buildingsite.h"
#include "metroentrance.h"
#include "gaslamp.h"
#include "park.h"
#define p make_pair

Board::Board(){
    // TODO
    set<Position> strictMarks;
    this->tiles[p(2, 9)] = MetroEntrance::instance;
    this->tiles[p(3, 10)] = GasLamp::instance;
    this->tiles[p(4, 9)] = BuildingSite::instance;
    strictMarks.insert(p(4, 9));
    this->allMap[LibertyIsland::instance.position] = &LibertyIsland::instance;
    this->allMap[LandExit::instance.position] = &LandExit::instance;
}
