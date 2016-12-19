//
// Created by z3ddycus on 19/12/16.
//

#include "Local.h"

void Local::setName(const char *name) {
    this->name=name;
}

Local::Local(const char *name, localType type) : name(name), type(type){

}
