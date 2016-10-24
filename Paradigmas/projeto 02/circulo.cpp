#include "circulo.h"
#include <iostream>
#include "Ponto.h"
#include <cmath>

using namespace std;

Circulo::Circulo(int x,int y,int _r,int _mode)
{
    p.setXY(x,y);
    r=_r;
    mode=_mode;
}

void Circulo::pos()
{
  cout << "mandando posicao circulo" << endl;
}

void Circulo::draw(Screen &t){

    int x = p.getX();
    int y = p.getY();

    for(int i=x-r;i<=(x+r);i++){
        for(int j=y-r;j<=(y+r);j++){

            float aux = (pow((i-x),2) + pow((j-y),2));
            aux = (pow(aux,0.5));
            if(mode==0){
                if((int)aux==r){
                    t.setPixel(i,j);
                }
            }else if(mode>0){
                if((int)aux<=r){
                    t.setPixel(i,j);
                }
            }
        }
    }

}
