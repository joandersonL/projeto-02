#include "Ponto.h"
#include <iostream>
#include <cmath>
using namespace std;


//Construtor para iniciar o ponto
Ponto::Ponto(float _x, float _y){

    x = _x;
    y = _y;
}

//Destrutor da class
Ponto::~Ponto(){}

//funcao que retorna o valor da coordeanda
//x do ponto
float Ponto::getX(){
    return x;
}

//Funcao que altera  o valor da coordeanda
//x do ponto para o valor dado;
void Ponto::setX(float _x){
    x = _x;
}

//Funcao que retorna o valor da coordeanda
//y do ponto
float Ponto::getY(){
    return y;
}

//Funcao que altera  o valor da coordeanda
//y do ponto para o valor dado;
void Ponto::setY(float _y){
    y = _y;
}

//Funcao que altera  o valor das coordeanda
//x e y do ponto para o valor dado;
void Ponto::setXY(float _x ,float _y){
    x = _x;
    y = _y;
}

//Funcao para calcular a soma do ponto
//deste objeto ponto com outro ponto
//e retorna esse novo ponto
Ponto Ponto::addPonto(Ponto p){
    Ponto pNovo;
    pNovo.setXY(x + p.getX(),y + p.getY());

    return pNovo;
}

//Funcao para calcular a subitracao do ponto
//deste objeto ponto com outro ponto
//e retorna esse novo ponto
Ponto Ponto::subPonto(Ponto p){
    Ponto pNovo;
    pNovo.setXY(x - p.getX(),y - p.getY());
    return pNovo;
}

//Funcao para calcular a norma do ponto
//em relaçao com a as coordenadas (0 0)
//e retorna esse esse valor
float Ponto::norma(){
    float a,b;
    a = pow(0-x,2);
    b = pow(0-y,2);

    return sqrt(a+b);
}

//Funcao e utilizado para
//trasladar uma largura a
//e um largura b;
Ponto Ponto::translada(float a,float b){
    Ponto pNovo;
    pNovo.setXY(x+a,y+b);
    return pNovo;
}

//Funcao feito para imprimir o ponto
//no formato '( x,y)'
void Ponto::imprime(){
    cout<< "("<<x<<","<<y<<")";
}


