//
// Created by z3ddycus on 19/12/16.
//

#ifndef PROJECT_LOCAL_H
#define PROJECT_LOCAL_H

enum localType {STUDIO, F2, F2bis, F3, F3bis, F4, F5};
const static int nombrePiece[] = {1,2,2,3,3,4,5};
class Local {

private :
    const localType type;
    const char* name;
public:
    void setName(const char* name);
    const char* getName() const{
        return name;
    }
    localType getType() const {
        return type;
    }
    int getPieceNumber() const {
        return nombrePiece[type];
    }
};


#endif //PROJECT_LOCAL_H
