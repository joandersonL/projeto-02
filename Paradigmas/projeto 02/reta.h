#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "Ponto.h"
#include "Screen.h"

class Reta : public FiguraGeometrica{

private:
    Ponto pi;
    Ponto pf;

public:
  Reta(Ponto _pi, Ponto _pf);
  Reta(int  x1,int y1, int x2,int y2);
  void pos(void);
  void draw(Screen &t);
};


#endif // RETA_H
