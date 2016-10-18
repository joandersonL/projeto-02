#include "Screen.h"
#include <vector>

using namespace std;

Screen :: Screen(int _nlin,int _ncol){
    nlin=_nlin;
    ncol=_ncol;
    pincel = ' ';
    mat = vector <vector<char> >(nlin,vector<char>(ncol));

    for(int i=0;i<nlin;i++){
        for(int j=0;j<nlin;j++){
            mat[i][j] = ' ';
        }
    }
}

void Screen :: liparTela(){
    for(int i=0;i<nlin;i++){
        for(int j=0;j<nlin;i++){
            mat[i][j] = ' ';
        }
    }
}
void Screen :: setPincel(char _pincel){
    pincel = pincel;
}
void Screen :: setPixel(int x,int y){
    mat[x][y] = pincel;
}

