#include"Im.h"

extern ostream &operator<<(ostream & ,const Im &);

int main(){
    TrBr trbr(80,140);
    trbr.setrg(1);
    cout<<trbr<<endl;
    Im *p=trbr.clone();
    cout<<*p<<endl;
    cout<<"Hauteur Limite: "<<Tr::getH()<<endl;

    try{
        Br ma_Br(20,150);
        cout<<ma_Br<<endl;

        Tr ma_Tr(70,20); ma_Tr.setrg(2);
        cout<<ma_Tr<<endl;

        TrBr ma_TrBr(70,140); ma_TrBr.setrg(2);
        cout<<ma_TrBr<<endl;

        TrBr ma_TrBr1(10,140); ma_TrBr.setrg(5);
        cout<<ma_TrBr1<<endl;

        Tr ma_Tr1(20,140);  ma_TrBr.setrg(4);
        cout<<ma_Tr1<<endl;

        Br ma_Br1(20,10);
        cout<<ma_Br1<<endl;

    }
    catch(OutIm &out){
        out.notice();
    }
    catch(...){
        cerr << "Exception lancee mais non captee" << endl;
    }

    return 0;
}