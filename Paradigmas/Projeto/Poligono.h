#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include "Ponto.h"


//Classe Poligono que cria poligono
//de ate 100 vertices
class Poligono{

private:
    int nVertices;
protected:
    Ponto p[100];
public:
    Poligono();
    ~Poligono();

    void addVertice(float x, float y);
    int getVertice();
    float area();
    void mover(float x, float y);
    void rot(float ang);
    void rot(float ang,int px,int py);
    void print();
    Ponto centroide();
    void rot(float ang, Ponto p);



};


#endif // POLIGONO_H_INCLUDED
