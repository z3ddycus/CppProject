//
// Created by z3ddycus on 19/12/16.
//

#ifndef PROJECT_ETAGESERIALIZABLE_H
#define PROJECT_ETAGESERIALIZABLE_H

#include "Serializable.h"
#include "Etage.h"

template <typename T>
class EtageSerializable<T> : Serializable, Etage {

};

#endif //PROJECT_ETAGESERIALIZABLE_H
