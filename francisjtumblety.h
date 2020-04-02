#ifndef FRANCISJTUMBLETY_H
#define FRANCISJTUMBLETY_H
#include <character.h>


class FrancisJTumblety : public Character{
private:
    FrancisJTumblety();
public:
    static FrancisJTumblety* instance;
    static FrancisJTumblety* getInstance(){
        if(FrancisJTumblety::instance)
            return FrancisJTumblety::instance;
        return FrancisJTumblety::instance = new FrancisJTumblety();
    }
    void hypnotize(Character* adjacent, Character* target);
};
#endif // FRANCISJTUMBLETY_H
