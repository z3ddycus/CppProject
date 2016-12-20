//
// Created by z3ddycus on 19/12/16.
//


#include "Etage.h"

void Etage::addLocal(Local element) {
    locaux.ajout(element);
}

Liste<Local> Etage::getAlls() const{
    return locaux;
}

void Etage::print(ostream &flux) {
    for (int i = 0; i < locaux.getSize(); ++i) {
        flux << "\t\tLocal " << i << " : ";
        locaux.get(i).print(flux);
    }
}
