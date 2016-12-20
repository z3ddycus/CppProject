//
// Created by z3ddycus on 13/12/16.
//

#ifndef PROJECT_ETAGE_H
#define PROJECT_ETAGE_H

#include <vector>
#include <stdexcept>
#include "Local.h"
#include "../util/Liste.h"

using namespace std;

class Etage {
private:
    Liste<Local> locaux;
public:
    void print(ostream& flux);
    Local get(int i) const {
        if (i < 0 || i >= locaux.getSize()) {
            throw invalid_argument("Unbound value in etages");
        }
        return locaux.get(i);
    }
    int size() const {
        return locaux.getSize();
    }
    Liste<Local> getAlls() const;
    void addLocal(Local element);
};




#endif //PROJECT_ETAGE_H
