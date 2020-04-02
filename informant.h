#ifndef INFORMANT_H
#define INFORMANT_H
#include <cell.h>
#include <libertyisland.h>

class Informant{
private:
    Informant();
public:
    static Cell* cell;
    static bool mute;
    static void init(){
        Informant::cell = &LibertyIsland::instance;
        Informant::mute = true;
    }
};

#endif // INFORMANT_H
