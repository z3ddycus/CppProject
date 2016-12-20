#ifndef PROJECT_FILENAMEEXCEPTION_H
#define PROJECT_FILENAMEEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class FileNameException: public exception {
public:
    FileNameException() throw() {}

    virtual const char* serializable() const throw() {
        return "Impossible de sérialiser : nom de fichier cible vide";
    }

    virtual ~FileNameException() throw() {}

private:

};


#endif //PROJECT_FILENAMEEXCEPTION_H
