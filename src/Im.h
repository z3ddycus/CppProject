//
// Created by z3ddycus on 13/12/16.
//

#ifndef PROJECT_IM_H
#define PROJECT_IM_H


using namespace std;
#include<iostream>
#include"OutIm.h"




typedef  Im * Imm;

class Im{
    int h, l;
public:
    Im(int,int);
    virtual ~Im(){}
    virtual Im *clone()const;
    virtual void print(ostream &os=cout)const ;
};








class Tr: public virtual  Im{
    static int H;
    int rg;
public:
    Tr(int, int) throw (OutTr);
    inline void setrg(int);
    static int getH();/* Ne peut pas etre const car non attachee a une instance*/
    Tr *clone()const;
    void print(ostream &os=cout)const ;
protected:
    void print_P(ostream &os=cout)const ;
};
inline void Tr::setrg(int a){rg=a;}









class Br: public virtual Im{
    static int L;
public:
    Br(int, int) throw(OutBr);
    Br *clone()const;
    void print(ostream &os=cout)const ;
protected:
    void print_P(ostream &os=cout)const;
};


class TrBr: public Tr, public Br{
public:
    TrBr(int h, int l) throw(OutTr, OutBr);
    TrBr *clone()const;
    void print(ostream &os=cout)const;
};

#endif //PROJECT_IM_H
