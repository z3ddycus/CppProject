//
// Created by z3ddycus on 13/12/16.
//

#ifndef PROJECT_ETAGE_H
#define PROJECT_ETAGE_H

#include <vector>
#include <stdexcept>

using namespace std;

template <typename E>
class Etage {
private:
    vector<E> etages;
public:
    E get(unsigned long i) const {
        if (i < 0 || i >= etages.size()) {
            throw invalid_argument("Unbound value in etages");
        }
        return etages[i];
    }
    unsigned long size() const {
        return etages.size();
    }
    vector<E> getAlls() const;
    void addLocal(E element);
};

template <typename E>
void Etage<E>::addLocal(E element) {
    etages.push_back(element);
}

template <typename E>
vector<E> Etage<E>::getAlls() const{
    return etages;
}


#endif //PROJECT_ETAGE_H
