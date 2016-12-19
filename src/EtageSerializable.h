//
// Created by z3ddycus on 19/12/16.
//

#ifndef PROJECT_ETAGESERIALIZABLE_H
#define PROJECT_ETAGESERIALIZABLE_H

#include "Serializable.h"
#include "Etage.h"

class EtageSerializable : public Serializable, public Etage {
public:
    void print(std::ostream& flux);
};


#endif //PROJECT_ETAGESERIALIZABLE_H
