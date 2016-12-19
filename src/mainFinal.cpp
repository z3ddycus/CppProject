//
// Created by z3ddycus on 19/12/16.
//

#include "Im.h"
#include "Bureau.h"
#include "Appartement.h"
#include "EtageSerializable.h"

int main(void) {
    Etage etageA;
    etageA.addLocal(Bureau("BearStudio"));
    etageA.addLocal(Bureau("Saagie", F5));
    etageA.addLocal(Appartement("M. Bondu", F2));
    EtageSerializable etageB;
    etageB.addLocal(Bureau("StudioBagel"));
    etageB.addLocal(Bureau("Golden moustache", F5));
    etageB.addLocal(Appartement("Mme Nicart", F2));
    Etage etageC;
    Tr tour(100, 10);
    tour.addEtage(etageA);
    tour.addEtage(etageB);
    tour.addEtage(etageC);

    etageB.setFile("TestCpp.txt");
    etageB.write();


}