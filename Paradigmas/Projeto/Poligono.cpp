#include "Poligono.h"
#include "Ponto.h"
#include <cmath>
#include <iostream>

using namespace std;

//contrutor da classe Poligono
Poligono::Poligono(){

    nVertices = 0;

}

//Destrutor da classe poligono
Poligono::~Poligono(){}

//Metodo para adicionar vertice
//Recebe as coordenadas dos vertece
//E adiciona elas ao novo vertice
void Poligono::addVertice(float x, float y)
{
    p[nVertices].setXY(x,y);
    nVertices++;
}

//Metodo que retorna quantos vertices tem
//o poligono
int Poligono::getVertice(){
    return nVertices + 0;
}

//Metodo que calcula a area do poligono
float Poligono:: area(){
    //variavel que vai receber o somatorio
    float somaTotal=0;
    int i;

    //A area de um poligono e descrtia como o somatorio
    //de 0 ate quantidade de vertice -1
    // de (x(i)*y(i+1) - (y(i)*x(i+1)
    //dividio por 2;

    for(i=0; i < nVertices-1;i++){
        somaTotal += (p[i].getX()*p[i+1].getY() - p[i].getY()*p[i+1].getX());
    }

    somaTotal += (p[i].getX()*p[0].getY() - p[i].getY()*p[0].getX());

    return (abs(somaTotal))/2.0;


}

//Funcao que move o poligodo
//de sua posição para
//a posição das coordenadas
// + as valores dos componetes dado
void Poligono::mover(float x, float y){
    for(int i=0;i<nVertices;i++){
        p[i]=p[i].translada(x,y);
    }
}

//Esse Funcao calcula o poligono
// e retorna o ponto com essa coordeda;
Ponto Poligono::centroide(){
    float somaX=0;
    float somaY=0;
    Ponto pcentro;
    int i;
    for(i= 0; i < nVertices-1;i++){
        somaX+=  (p[i].getX()*p[i+1].getY() - p[i].getY()*p[i+1].getX())*(p[i].getX() + p[i+1].getX());
    }
    somaX +=(p[i].getX()*p[0].getY() - p[i].getY()*p[0].getX())*(p[i].getX() + p[0].getX());
    pcentro.setX( somaX/(6*area()));

    for(i= 0; i < nVertices-1;i++){
        somaY+=  (p[i].getX()*p[i+1].getY() - p[i].getY()*p[i+1].getX())*(p[i].getY() + p[i+1].getY());
    }
    somaY +=(p[i].getX()*p[0].getY() - p[i].getY()*p[0].getX())*(p[i].getY() + p[0].getY());
    pcentro.setY( somaY/(6*area()));

    return pcentro;

}
//Funcao que faz a rotação em realção a origem
void Poligono::rot(float ang){
    float a = (M_PI*ang)/180.0;
        for(int i=0;i<nVertices;i++){
        float x = cos(a)*p[i].getX() - sin(a)*p[i].getY();
        float y = sin(a)*p[i].getX() + cos(a)*p[i].getY();
        p[i].setXY(x,y);
    }
}

//Funcao que faz a rotacao em realão as coordenadas de um ponto
//formecido, no caso px e py
void Poligono::rot(float ang,int px,int py){
    mover(-px,-py);
    rot(ang);
    mover(px,py);
}

//Funcao que faz a rotacao em realão a um ponto
//formecido
void Poligono::rot(float ang,Ponto p){
    mover(-p.getX(),-p.getY());
    rot(ang);
    mover(p.getX(),p.getY());
}

//Funcao que faz a imprime o poligono
//ponton a ponto
void Poligono::print(){
    for(int i=0;i<nVertices;i++){
        p[i].imprime();
        cout<<"->";
    }
    p[0].imprime();
}
