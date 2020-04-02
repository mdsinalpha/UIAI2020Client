#ifndef LIBERTYISLAND_H
#define LIBERTYISLAND_H
#include <cell.h>

class LibertyIsland : public Cell{
private:
    LibertyIsland();
public:
    static LibertyIsland instance;
};

#endif // LIBERTYISLAND_H
