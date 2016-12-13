//
// Created by z3ddycus on 13/12/16.
//

#ifndef PROJECT_OUTIM_H
#define PROJECT_OUTIM_H

class OutIm{
public:
    virtual void notice() const=0;
};

class OutTr : public virtual OutIm{
public:
    void notice() const;
};

class OutBr : public virtual OutIm{
public:
    void notice() const;
};

#endif //PROJECT_OUTIM_H
