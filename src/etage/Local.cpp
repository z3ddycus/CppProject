//
// Created by z3ddycus on 19/12/16.
//

#include <cstring>
#include "Local.h"

void Local::setName(char *name) {
    this->name=name;
}

Local& Local::operator =(Local other)
{
    std::swap(name,other.name);
    type = other.type;
    return *this;
}

Local::Local(char *name, localType type) : type(type){
    this->name = name;
}

void Local::print(ostream &flux) {
    const char* pluriel = (this->getPieceNumber() > 1 ? "s" : "");
    flux << "\t" << this->getName() << " avec " << this->getPieceNumber()
         << " pièce" << pluriel << endl;
}
