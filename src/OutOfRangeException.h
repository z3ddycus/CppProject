//
// Created by Kadinator on 19/12/2016.
//

#ifndef PROJECT_OUTOFRANGEEXCEPTION_H
#define PROJECT_OUTOFRANGEEXCEPTION_H

#include <exception>

using namespace std;

class OutOfRangeException: public exception {
public:
    OutOfRangeException() throw() {}

    virtual const char* what() const throw() {
        return "L'indice donnee est hors de portee.";
    }

    virtual ~OutOfRangeException() throw() {}

private:

};

#endif //PROJECT_OUTOFRANGEEXCEPTION_H
