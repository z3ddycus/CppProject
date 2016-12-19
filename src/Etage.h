//
// Created by z3ddycus on 13/12/16.
//

#ifndef PROJECT_ETAGE_H
#define PROJECT_ETAGE_H

#include <vector>
#include <stdexcept>
#include "Local.h"

using namespace std;

class Etage {
private:
    vector<Local> etages;
public:
    Local get(unsigned long i) const {
        if (i < 0 || i >= etages.size()) {
            throw invalid_argument("Unbound value in etages");
        }
        return etages.at(i);
    }
    unsigned long size() const {
        return etages.size();
    }
    vector<Local> getAlls() const;
    void addLocal(Local element);
};




#endif //PROJECT_ETAGE_H
