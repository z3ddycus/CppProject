//
// Created by z3ddycus on 19/12/16.
//

#ifndef PROJECT_APPARTEMENT_H
#define PROJECT_APPARTEMENT_H

#include "Local.h"
#include "constantes.h"

class Appartement : public Local {
public:
    Appartement(const char* name = "unnamedBureau", localType type = STUDIO);
};

Appartement::Appartement(const char *name, localType type) : Local(name, type) {

}
#endif //PROJECT_APPARTEMENT_H
