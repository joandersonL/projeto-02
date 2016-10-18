#include <iostream>
#include<cmath>
#include "Retangulo.h"
using namespace std;

int main()
{
    Retangulo ret(0,0,3,4);

    cout<<"Retangulo: ";
    ret.print();
    cout<<endl;
    cout<<"Area do retangulo: "<<ret.area()<<endl<<endl<<endl;

    ret.mover(-3,4);
    cout<<"Retangulo: ";
    ret.print();
    cout<<endl;
    cout<<"Area do retangulo: "<<ret.area()<<endl<<endl<<endl;


    ret.rot(30,ret.centroide());
    cout<<"Retangulo: ";
    ret.print();
    cout<<endl;
    cout<<"Area do retangulo: "<<ret.area()<<endl<<endl<<endl;

    cout<<"Quantidade de vertices: "<<ret.getVertice()<<endl;
}
