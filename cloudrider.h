#ifndef CLOUDRIDER_H
#define CLOUDRIDER_H
#include <character.h>
#include <streetspace.h>

class CloudRider : public Character{
private:
    CloudRider();
public:
    static CloudRider* instance;
    static CloudRider* getInstance(){
        if(CloudRider::instance)
            return CloudRider::instance;
        return CloudRider::instance = new CloudRider();
    }
    void constructBuildingSite(StreetSpace* cell);
};

#endif // CLOUDRIDER_H
