#ifndef EDWARDSMITH_H
#define EDWARDSMITH_H
#include <character.h>
#include <portspace.h>


class EdwardSmith : public Character{
private:
    EdwardSmith();
public:
    static EdwardSmith* instance;
    static EdwardSmith* getInstance(){
        if(EdwardSmith::instance)
            return EdwardSmith::instance;
        return EdwardSmith::instance = new EdwardSmith();
    }
    void moveSteamer(PortSpace* from, PortSpace* to);
};
#endif // EDWARDSMITH_H
