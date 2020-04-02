#ifndef LEWISHOWARDLATIMER_H
#define LEWISHOWARDLATIMER_H
#include <character.h>
#include <streetspace.h>

class LewisHowardLatimer : public Character{
private:
    LewisHowardLatimer();
public:
    static LewisHowardLatimer* instance;
    static LewisHowardLatimer* getInstance(){
        if(LewisHowardLatimer::instance)
            return LewisHowardLatimer::instance;
        return LewisHowardLatimer::instance = new LewisHowardLatimer();
    }
    void installGasLamp(StreetSpace* cell);
};

#endif // LEWISHOWARDLATIMER_H
