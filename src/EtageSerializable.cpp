//
// Created by z3ddycus on 19/12/16.
//

#include <iostream>
#include "EtageSerializable.h"


void EtageSerializable::print(std::ostream &flux) {
    vector<Local> locaux = getAlls();
    vector<Local>::iterator it;

    flux << "Affichage de l'étage" << endl;
    for (int i(0); i < locaux.size(); ++i) {
        locaux[i].print(flux);
    }
    flux << "Fin" << endl;
}