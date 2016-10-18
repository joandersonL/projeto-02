#include "reta.h"
#include <iostream>

using namespace std;


Reta::Reta(){



}

Reta::Reta(Ponto _pi, Ponto _pf){

    pi = _pi;

    pf = _pf;


}
Reta::Reta(int  x1,int y1, int x2,int y2){
    pi.setXY(x1,y1);
    pf.setXY(x2,y2);
}

void Reta::pos(){
  cout << "Ponto inicial:" <<pi.imprime();
  cout << "Ponto final: " <<pf.imprime();
}
void Reta::draw(Screen &t){
    int x1 = pi.getX();
    int y1 = pi.getY();
    int x2 = pf.getX();
    int y2 = pf.getY();

    int qtdL = x2-x1;
    int qtdC = y2-y1;


    //cresX = (x2-x1)/2 - 1;
    //cresY = (y2-y1)/2 - 1;
    if(qtdC>qtdL){
        int Y = (qtdC +1)/(qtdL+1);
        for(int i = x1; i<x2;i++){
            int cont = 0;
            int j = y1;
            t.setPincel(i,j);
            while(cont<Y&&j<y2){
                t.setPincel(i,j);
                j++;
                cont++;
            }

        }
    }else if(cresY>=0&&cresY<=1&&cresX>1){
        for(int i = y1; i<y2;i+=cresY){
            int j = x1;
            int cont = 0;
            while(cont<cresX&&j<x2){
                t.setPincel(j,i);
                j++;
                cont++;
            }

        }
    }


}

