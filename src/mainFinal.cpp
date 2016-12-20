//
// Created by z3ddycus on 19/12/16.
//

#include "util/Liste.h"
#include "origine/Im.h"
#include "etage/Bureau.h"
#include "etage/Appartement.h"

int main(void) {
    Etage etageA;
    etageA.addLocal(Bureau((char*) "BearStudio"));
    etageA.addLocal(Bureau((char*) "Saagie", F5));
    etageA.addLocal(Appartement((char*) "M. Bondu", F2));
    Etage etageB;
    etageB.addLocal(Bureau((char*) "StudioBagel"));
    etageB.addLocal(Bureau((char*) "Golden moustache", F5));
    etageB.addLocal(Appartement((char*) "Mme Nicart", F2));
    Etage etageC;
    Tr tour(100, 10);
    tour.addEtage(etageA);
    tour.addEtage(etageB);
    tour.addEtage(etageC);
    tour.printS(cout);
    tour.setFile((char*) "./test.txt");
    tour.write();
}