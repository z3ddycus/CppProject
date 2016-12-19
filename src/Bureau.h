//
// Created by z3ddycus on 19/12/16.
//

#ifndef PROJECT_BUREAU_H
#define PROJECT_BUREAU_H

#include "Local.h"
#include "constantes.h"

class Bureau : public Local {
public:
    Bureau(const char* name = "unnamedBureau", localType type = STUDIO);
};

Bureau::Bureau(const char *name, localType type) : Local(name, type) {

}

#endif //PROJECT_BUREAU_H
