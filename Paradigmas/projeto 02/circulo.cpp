#include "circulo.h"
#include <iostream>
#include "Ponto.h"

using namespace std;

Circulo::Circulo(int x,int y,int _r)
{
    p.setXY(x,y);
    r=_r;
}

void Circulo::pos()
{
  cout << "mandando posicao circulo" << endl;
}

void Circulo::draw(Screen &t){

}

