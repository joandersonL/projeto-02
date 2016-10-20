#include "retangulo.h"
#include <iostream>
#include "Ponto.h"
#include "reta.h"

using namespace std;
/*
Retangulo::Retangulo()
{

}*/
/*
Retangulo::Retangulo(Ponto _p0,int larg, int alt){

}*/
Retangulo::Retangulo(int x,int y,int alt, int larg){
    p0.setXY(x,y);
    p1.setXY(x,y+larg);
    p2.setXY(x+alt,y+larg);
    p3.setXY(x+alt,y);

}

void Retangulo::pos(){
  cout << "mandando posicao retangulo" << endl;
}
void Retangulo::draw(Screen &t){
    Reta p0p3(p0,p3),p1p2(p1,p2),p0p1(p0,p1),p3p2(p3,p2);
    p0p3.draw(t);
    p1p2.draw(t);
    p0p1.draw(t);
    p3p2.draw(t);
}

