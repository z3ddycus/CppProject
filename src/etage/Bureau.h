//
// Created by z3ddycus on 20/12/16.
//

#ifndef CPPPROJECT_BUREAU_H
#define CPPPROJECT_BUREAU_H


#include "Local.h"
#include "constantes.h"

using namespace std;

class Bureau : public Local {
public:
    Bureau(char* name = (char*) "unnamedBureau", localType type = STUDIO);
};


#endif //CPPPROJECT_BUREAU_H
