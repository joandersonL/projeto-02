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

    void liparTela();

    void setPincel(char _pincel);

};




#endif // SCREEN_H_INCLUDED
