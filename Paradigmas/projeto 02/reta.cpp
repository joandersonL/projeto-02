#include "reta.h"
#include "Ponto.h"
#include "Screen.h"
#include <iostream>
#include <cmath>

using namespace std;


Reta::Reta(Ponto _pi, Ponto _pf){
    pi = _pi;
    pf = _pf;
}
Reta::Reta(int  x1,int y1, int x2,int y2){

    pi.setXY(x1,y1);
    pf.setXY(x2,y2);
}

void Reta::pos(){
  cout << "Ponto inicial:";pi.imprime();
  cout << "Ponto final: ";pf.imprime();
}
void Reta::draw(Screen &t){
    int x1 = pi.getX();
    int y1 = pi.getY();
    int x2 = pf.getX();
    int y2 = pf.getY();

    int qtdL = (x2-x1);
    int qtdC = (y2-y1);
    if(qtdL>=0||qtdC>=0){
        qtdL++;
        qtdC++;
    }else{
        qtdL--;
        qtdC--;
    }


    if(qtdC>=0&&qtdL>=0&&qtdC != qtdL){

        if(qtdC>qtdL){
            int Y=0;
            if(qtdL !=0){
                Y = abs((qtdC)/(qtdL));
            }
            int j = y1;
            for(int i = x1; i<=x2;i++){
                int cont = 0;

                t.setPixel(i,j);
                while(cont<Y&&j<y2){
                    t.setPixel(i,j);
                    j++;
                    cont++;
                }

            }
            t.setPixel(x2,y2);
        }else if(qtdC<qtdL){
            int X = 0;
            if(qtdC>0){
                X = abs(qtdL/qtdC);
            }
            int i = x1;
            for(int j = y1;j<=y2;j++){
                int cont = 0;

                t.setPixel(i,j);
                while(cont<X&&i<x2){
                    t.setPixel(i,j);
                    i++;
                    cont++;
                }
            }
            t.setPixel(x2,y2);
        }
    }else if(qtdC == qtdL&&qtdC>0){

        for(int i=x1,j=y1;i<=x2;i++,j++){
            t.setPixel(i,j);
        }
    }else if(qtdC == qtdL&&qtdC){

        for(int i=x1,j=y1;i<=x2;i--,j++){
            t.setPixel(i,j);
        }
    }else{
        //asasa
        if(qtdC>qtdL){
            int Y=0;
            if(qtdL !=0){
                Y = abs((qtdC)/(qtdL));
            }
            int j = y1;
            for(int i = x1; i>=x2;i--){
                int cont = 0;

                t.setPixel(i,j);
                while(cont<Y&&j<y2){
                    t.setPixel(i,j);
                    j++;
                    cont++;
                }

            }
        }else if(qtdC<qtdL){
            int X = 0;
            if(qtdC>0){
                X = abs(qtdL/qtdC);
            }
            int i = x1;
            for(int j = y1;j>=y2;j--){
                int cont = 0;

                t.setPixel(i,j);
                while(cont<X&&i<x2){
                    t.setPixel(i,j);
                    i++;
                    cont++;
                }
            }
        }
    }

}

