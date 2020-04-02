#ifndef JAMESHCALLAHAN_H
#define JAMESHCALLAHAN_H
#include <character.h>
#include <investigationtile.h>
#include <streetspace.h>
#include <utility>

class JamesHCallahan : public Character{
private:
    JamesHCallahan();
public:
    static JamesHCallahan* instance;
    static JamesHCallahan* getInstance(){
        if(JamesHCallahan::instance)
            return JamesHCallahan::instance;
        return JamesHCallahan::instance = new JamesHCallahan();
    }
    void moveInvestigationTile(InvestigationTile tile, std::pair<StreetSpace*, StreetSpace*> cells);
};
#endif // JAMESHCALLAHAN_H
