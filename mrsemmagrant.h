#ifndef MRSEMMAGRANT_H
#define MRSEMMAGRANT_H
#include <character.h>
#include <streetspace.h>

class MrsEmmaGrant : public Character{
private:
    MrsEmmaGrant();
public:
    static MrsEmmaGrant instance;
    void createPark(StreetSpace* cell);
};

#endif // MRSEMMAGRANT_H
