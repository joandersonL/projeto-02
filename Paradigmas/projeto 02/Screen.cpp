#include "Screen.h"
#include <vector>
#include <iostream>

using namespace std;

Screen :: Screen(int _nlin,int _ncol){
    nlin=_nlin;
    ncol=_ncol;
    pincel = 'x';
    mat = vector <vector<char> >(nlin,vector<char>(ncol));

    for(int i=0;i<nlin;i++){
        for(int j=0;j<nlin;j++){
            mat[i][j] = ' ';
        }
    }
}

void Screen :: limparTela(){
    for(int i=0;i<nlin;i++){

        for(int j=0;j<nlin;j++){
            mat[i][j] = ' ';
        }
    }
}
void Screen :: setPincel(char _pincel){
    pincel = _pincel;
}
void Screen :: setPixel(int x,int y){
    bool aux1 = (x>=0 && x<nlin);
    bool aux2 = (y>=0 && y<ncol);
    if(aux1&&aux2)mat[x][y] = pincel;
}
void Screen::imprimirTela(){
    for(int i=0;i<nlin;i++){
        for(int j=0;j<nlin;j++){
            cout<< mat[i][j];
        }
        cout<<endl;
    }
}
