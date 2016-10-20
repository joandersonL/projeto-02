#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "Ponto.h"



class Retangulo : public FiguraGeometrica {
    Ponto p0,p1,p2,p3;

    int alt;
    int larg;

public:
  //Retangulo(Ponto _p0,int larg, int _alt);
  Retangulo(int x,int y,int alt, int larg);
  void pos(void);
  void draw(Screen &t);
};

#endif // RETANGULO_H
