#include "Retangulo.h"

//Contrutor que adiciona os 4 vertices de um poligono do tipo retangulo
//Pegando as cordenadas do ponto superior esquerdo
//varia x e y para criar o primeiro vertice
//E apartir das largura e alturaa cria os outros 3 vertices
//formando assim um retangulo
Retangulo::Retangulo(int x,int y,int largura,int altura){
    addVertice(x,y);
    addVertice(x,y-altura);
    addVertice(x+largura,y-altura);
    addVertice(x+largura,y);
}

//Destrutor da classe
Retangulo::~Retangulo(){
}
