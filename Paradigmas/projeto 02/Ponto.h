#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED


//Classe ponto
class Ponto
{
private:
    float x;
    float y;

public:
    Ponto(float _x=0,float _y =0);
    ~Ponto();



    float getX();
    void setX(float _x);
    void setXY(float _x,float _y);
    float getY();
    void setY(float y);
    Ponto addPonto(Ponto p);
    Ponto subPonto(Ponto p);
    float norma();
    Ponto translada(float a,float b);
    void imprime();

};

#endif // PONTO_H_INCLUDED
