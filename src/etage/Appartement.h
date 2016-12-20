//
// Created by z3ddycus on 20/12/16.
//

#ifndef CPPPROJECT_APPARTEMENT_H
#define CPPPROJECT_APPARTEMENT_H


#include "constantes.h"
#include "Local.h"


class Appartement : public Local {
public:
    Appartement(char* name = (char*) "unnamedBureau", localType type = STUDIO);
};



#endif //CPPPROJECT_APPARTEMENT_H
