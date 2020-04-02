#ifndef LIBERTYISLAND_H
#define LIBERTYISLAND_H
#include <cell.h>

class LibertyIsland : public Cell{
private:
    LibertyIsland();
public:
    const static LibertyIsland instance;
};

#endif // LIBERTYISLAND_H
