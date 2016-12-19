//
// Created by z3ddycus on 19/12/16.
//

#include "Liste.h"
#include "Im.h"
#include "Bureau.h"
#include "Appartement.h"
#include "EtageSerializable.h"

int main(void) {
    EtageSerializable etageA;
    etageA.addLocal(Bureau("BearStudio"));
    etageA.addLocal(Bureau("Saagie", F5));
    etageA.addLocal(Appartement("M. Bondu", F2));
    EtageSerializable etageB;
    etageB.addLocal(Bureau("StudioBagel"));
    etageB.addLocal(Bureau("Golden moustache", F5));
    etageB.addLocal(Appartement("Mme Nicart", F2));
    EtageSerializable etageC;
    Tr tour(100, 10);
    tour.addEtage(etageA);
    tour.addEtage(etageB);
    tour.addEtage(etageC);
    cout << "etageA" << endl;
    etageA.print(cout);
    cout << "etageB" << endl;
    etageB.print(cout);
    cout << "etageC" << endl;
    etageC.print(cout);
    etageB.setFile("TestCpp.txt");
    etageB.write();

    Liste<double> l = Liste<double>();
    l.ajout(10);
    l.ajout(20);
    l.ajout(40);
    cout << l.get(2) << endl;
    l.set(2, 30);
    cout << l.get(2) << endl;
    l.remove(2);
    l.get(2);
}