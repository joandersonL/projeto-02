#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "Ponto.h"

class Circulo : public FiguraGeometrica {
private:
    Ponto p;
    int r;

public:
    Circulo(int x,int y,int _r);
    void pos(void);
    void draw(Screen &t);

};

#endif // CIRCULO_H
