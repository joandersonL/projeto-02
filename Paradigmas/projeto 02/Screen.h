#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED
#include <vector>

using namespace std;

class Screen{
private:
    int nlin,ncol;

    char pincel;

    vector <vector<char> >mat;

public:
    Screen(int _nlin,int _ncol);

    void setPixel(int x,int y);

    void limparTela();

    void setPincel(char _pincel);

    void imprimirTela();

};




#endif // SCREEN_H_INCLUDED
