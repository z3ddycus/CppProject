//
// Created by z3ddycus on 19/12/16.
//

#ifndef PROJECT_BUREAU_H
#define PROJECT_BUREAU_H

#include "Local.h"
#include "constantes.h"
#include <iostream>

using namespace std;

class Bureau : public Local {
public:
    Bureau(const char* name = "unnamedBureau", localType type = STUDIO);
};

#endif //PROJECT_BUREAU_H
