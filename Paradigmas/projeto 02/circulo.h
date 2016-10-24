#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "Ponto.h"

class Circulo : public FiguraGeometrica {
private:
    Ponto p;
    int r;
    int mode;

public:
    Circulo(int x,int y,int _r,int _mode=0);
    void pos(void);
    void draw(Screen &t);

};

#endif // CIRCULO_H
