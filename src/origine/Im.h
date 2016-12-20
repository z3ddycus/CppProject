//Im.h

#ifndef I_H
#define I_H

using namespace std;
#include<iostream>
#include"OutIm.h"
#include "../etage/Etage.h"
#include "../util/Serializable.h"

class Im{
    int h, l;
public: Im(int,int);
    virtual ~Im(){}
    virtual Im *clone()const;
    virtual void print(ostream &os=cout)const ;
};

typedef  Im * Imm;

class Br: public virtual Im{
    static int L;
public:
    Br(int, int) throw(OutBr);
    Br *clone()const;
    void print(ostream &os=cout)const ;
protected:
    void print_P(ostream &os=cout)const;
};

class Tr: public virtual  Im, public Serializable {
    static int H;
    Liste<Etage> etages;
    int rg;
public:
    Tr(int, int) throw (OutTr);
    inline void setrg(int);
    static int getH();/* Ne peut pas etre
 const car non attachee a une instance*/
    Liste<Etage> getEtages() const {
        return etages;
    }
    void addEtage(Etage e);
    void print(ostream &os=cout)const ;
    void printS(ostream &os=cout)const;
protected:
    void print_P(ostream &os=cout)const ;
};
inline void Tr::setrg(int a){rg=a;}

class TrBr: public Tr, public Br{
public:
    TrBr(int h, int l) throw(OutTr, OutBr);
    void print(ostream &os=cout)const;
};
#endif
//---------------------------------------------
