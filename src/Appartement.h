//
// Created by z3ddycus on 19/12/16.
//

#ifndef PROJECT_APPARTEMENT_H
#define PROJECT_APPARTEMENT_H

#include "Local.h"
#include <iostream>
#include "constantes.h"

using namespace std;

class Appartement : public Local {
public:
    Appartement(const char* name = "unnamedBureau", localType type = STUDIO);
};


#endif //PROJECT_APPARTEMENT_H
