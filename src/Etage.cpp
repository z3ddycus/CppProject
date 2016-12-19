//
// Created by z3ddycus on 19/12/16.
//


#include "Etage.h"

void Etage::addLocal(Local element) {
    etages.push_back(element);
}

vector<Local> Etage::getAlls() const{
    return etages;
}