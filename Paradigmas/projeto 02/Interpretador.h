#ifndef INTERPRETADOR_H_INCLUDED
#define INTERPRETADOR_H_INCLUDED
#include <fstream>
#include <vector>
#include "figurageometrica.h"
#include <string>
#include <fstream>

class Interpretador{
private:
    int linha;
    int coluna;
    int n;
    vector<FiguraGeometrica*> figs;
    vector<char> br;
public:
    Interpretador(ifstream &fin, char ed[]);
    int getLinha();
    int getColuna();
    int getN();
    FiguraGeometrica* getFigura(int n);
    char getPicel(int n);
};

#endif // INTERPRETADOR_H_INCLUDED
