//
// Created by z3ddycus on 13/12/16.
//

#include "Etage.h"
#include <iostream>

using namespace std;

int main() {
    Etage<int> etage = Etage<int>();
    etage.addLocal(5);
    etage.addLocal(7);
    etage.addLocal(9);
    for (unsigned long k = 0; k < etage.getAlls().size(); ++k) {
        cout << etage.get(k) << endl;
    }
}
