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
    const localType type;
    const char* name;
public:
    virtual void print(ostream& flux);
    Local(const char* name = "Unnamed", localType type = STUDIO);
    virtual void setName(const char* name);
    virtual const char* getName() const{
        return name;
    }
    virtual localType getType() const {
        return type;
    }
    virtual int getPieceNumber() const {
        return nombrePiece[type];
    }
};


#endif //PROJECT_LOCAL_H
