#ifndef ALFREDELYBEACH_H
#define ALFREDELYBEACH_H
#include <cell.h>
#include <streetspace.h>

class AlfredElyBeach : public Character{
private:
    AlfredElyBeach();
public:
    static AlfredElyBeach* instance;
    static AlfredElyBeach* getInstance(){
        if(AlfredElyBeach::instance)
            return AlfredElyBeach::instance;
        return AlfredElyBeach::instance = new AlfredElyBeach();
    }
    void constructMetroEntrance(StreetSpace* cell);
};

#endif // ALFREDELYBEACH_H
