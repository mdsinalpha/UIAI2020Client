#ifndef STREETSPACE_H
#define STREETSPACE_H
#include <cell.h>
#include <tile.h>
#include <position.h>
#include <vector>
#include <map>
#include <algorithm>
#define p std::make_pair

class StreetSpace : public Cell{
private:
    StreetSpace(Position position, std::vector<Position> adjacents);
    StreetSpace(Position position, std::vector<Position> adjacents, Tile tile, bool strictTile);
public:
    Tile tile;
    bool strictTile;
    static std::map<Position, StreetSpace*> instances;
    static void init(){
        int lo[15]{0, 10, 7, 8, 5, 4, 3, 4, 3, 2, 3, 2, 3, 2, 0};
        int alo[15]{0, 8, 7, 6, 5, 2, 3, 2, 3, 2, 3, 2, 1, 2, 11};
        int hi[15]{0, 10, 11, 14, 15, 14, 15, 14, 13, 12, 13, 14, 15, 16, 0};
        int ahi[15]{0, 10, 13, 14, 15, 16, 15, 16, 13, 12, 13, 16, 15, 16, 11};
        int adjC[6]{0, 0, 1, 1, -1, -1};
        int adjR[6]{-2, 2, 1, -1, 1, -1};
        Position stricts[7]{p(4, 9), p(4, 11), p(7, 8), p(10, 5), p(10, 11), p(11, 6), p(11, 10)}; 
        Position buildings[6]{p(4, 9), p(4, 11), p(10, 5), p(10, 11), p(11, 6), p(11, 10)};
        Position metros[3]{p(2, 9), p(11, 4), p(12, 13)};
        Position lamps[2]{p(3, 10), p(13, 12)};
        for(int col = 1; col <= 14; col++)
            for(int row = lo[col]; row <= hi[col]; row+=2){
                StreetSpace* sp;
                Position pos = p(col, row);
                std::vector<Position> adj;
                for(int k = 0; k < 6; k++){
                    int ncol = col + adjC[k], nrow = row + adjR[k];
                    if(ncol >= 1 && ncol <= 14 && nrow >= alo[ncol] && nrow <= ahi[ncol])
                        adj.push_back(p(ncol, nrow));
                }
                bool s = std::find(stricts, stricts+7, pos) - stricts < 7;
                bool b = std::find(buildings, buildings+6, pos) - buildings < 6;
                bool m = std::find(metros, metros+3, pos) - metros < 3;
                bool l = std::find(lamps, lamps+2, pos) - lamps < 2;
                if(b)
                    sp = new StreetSpace(pos, adj, BuildingSite, s);
                else if(m)
                    sp = new StreetSpace(pos, adj, MetroEntrance, s);
                else if(l)
                    sp = new StreetSpace(pos, adj, GasLamp, s);
                else
                    sp = new StreetSpace(p(col, row), adj);
                StreetSpace::instances[p(col, row)] = sp;
//                if(col == 5 && row == 8)
//                    sp->character = LewisHowardLatimer::getInstance();
//                else if(col == 5 && row == 10)
//                    sp->character = AlfredElyBeach::getInstance();
//                else if(col == 6 && row == 9)
//                    sp->character = JamesHCallahan::getInstance();
//                else if(col == 8 && row == 5)
//                    sp->character = MonkEastman::getInstance();
//                else if(col == 8 && row == 1)
//                    sp->character = FrancisJTumblety::getInstance();
//                else if(col == 9 && row == 8)
//                    sp->character = CloudRider::getInstance();
//                else if(col == 10 && row == 7)
//                    sp->character = MrsEmmaGrant::getInstance();
//                else if(col == 10 && row == 9)
//                    sp->character = EdwardSmith::getInstance();      
            }
        
    }
};

#endif // STREETSPACE_H
