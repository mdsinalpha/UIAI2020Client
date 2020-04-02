#ifndef LANDEXIT_H
#define LANDEXIT_H
#include <cell.h>

class LandExit : public Cell{
private:
    LandExit();
public:
    const static LandExit instance;
};

#endif // LANDEXIT_H
