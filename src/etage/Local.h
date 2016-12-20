//
// Created by z3ddycus on 19/12/16.
//

#ifndef PROJECT_LOCAL_H
#define PROJECT_LOCAL_H


#include "constantes.h"
#include <iostream>

using namespace std;

class Local {

private :
    localType type;
    char* name;
public:
    virtual void print(ostream& flux);
    Local(char* name = (char*) "Unnamed", localType type = STUDIO);
    virtual void setName(char* name);
    virtual const char* getName() const{
        return name;
    }
    virtual localType getType() const {
        return type;
    }
    virtual int getPieceNumber() const {
        return nombrePiece[type];
    }

    Local& operator =(Local other);
};



#endif //PROJECT_LOCAL_H
