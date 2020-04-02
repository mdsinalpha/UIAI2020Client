#ifndef MONKEASTMAN_H
#define MONKEASTMAN_H
#include <character.h>


class MonkEastman : public Character{
private:
    MonkEastman();
public:
    static MonkEastman* instance;
    static MonkEastman* getInstance(){
        if(MonkEastman::instance)
            return MonkEastman::instance;
        return MonkEastman::instance = new MonkEastman();
    }
    void moveAnotherCharacter(Character* character, Cell* cell);
};
#endif // MONKEASTMAN_H
