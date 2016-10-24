#include <iostream>
#include <fstream>

#include "retangulo.h"
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "Screen.h"
#include "Interpretador.h"


using namespace std;

int main()
{

    ifstream test;
    ofstream telaSaida;
    Interpretador de(test,"teste.txt");
    Screen t(de.getLinha(),de.getColuna());
    Screen t2(de.getLinha(),de.getColuna());
    for(int i=0;i<de.getN();i++){
        t.setPincel(de.getPicel(i));
        de.getFigura(i)->draw(t);
    }

    telaSaida.open("saida.txt");
    if(telaSaida.is_open()){
        telaSaida<<t;
    }
    telaSaida.close();
    cout<<t;

}

