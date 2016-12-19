#include "Im.h"

Im::Im(int a, int b):h(a),l(b){}

Im::Im(Im const& im) : h(im.h), l(im.l){}

Im *Im::clone()const{
    Im *p=new Im(*this);
    return p;
}

void Im::print(ostream &c)const {
    c<< "Hauteur "<< h<< ' ';
    c<< "Longueur "<< l<< ' ';
}

Br::Br(int h, int l) throw(OutBr):Im(h,l){
    if(l < L) throw OutBr();
};

Br *Br::clone()const{
    Br *p=new Br(*this);
    return p;
}

void Br::print(ostream &c)const {
    Im::print(c);
    c<<"Longueur limite "<< L << ' ';
}

void Br::print_P(ostream &c)const {
    c<<"Longueur limite "<< L << ' ';
}

int Tr::getH(){return H;}

Tr::Tr(int h, int l) throw(OutTr):Im(h,l){
    if(h < H) throw OutTr();
};

Tr *Tr::clone()const{
    Tr *p=new Tr(*this);
    return p;
}

void Tr::print_P(ostream &c)const {
    c<<"Hauteur limite "<< getH() << ' ';
    c<<"Rang "<<rg<<' ';
}

void Tr::print(ostream &c)const {
    Im::print(c);
    c<<"Rang "<<rg<<' ';
    c<<"Hauteur limite "<< H <<' ';
}

TrBr::TrBr(int a, int b) throw(OutTr,OutBr):
        Im(a,b),Tr(a,b),Br(a,b){}

/*
Un Warning disant que l'ordre est mauvais est envoye
TrBr::TrBr(int a, int b) throw(OutTr,OutBr):
Tr(a,b),Br(a,b),Im(a,b){} 
*/

/*
Non initialisation de h et de l
TrBr::TrBr(int a, int b) throw(OutTr,OutBr):
Tr(a,b),Br(a,b){}
*/

TrBr *TrBr::clone()const{
    TrBr *p=new TrBr(*this);
    return p;
}

void TrBr::print(ostream &c)const {
    Im::print(c);
    Tr::print_P(c);
    Br::print_P(c);
}

int Tr::H=30;
int Br::L=100;

ostream & operator<<(ostream &c,const Im &im){
    im.print(c);
    return c;
}