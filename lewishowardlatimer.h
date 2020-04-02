#ifndef LEWISHOWARDLATIMER_H
#define LEWISHOWARDLATIMER_H
#include <character.h>
#include <streetspace.h>

class LewisHowardLatimer : public Character{
private:
    LewisHowardLatimer();
public:
    static LewisHowardLatimer instance;
    void installGasLamp(StreetSpace* cell);
};

#endif // LEWISHOWARDLATIMER_H
