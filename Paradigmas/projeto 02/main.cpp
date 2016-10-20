#include <iostream>
#include "retangulo.h"
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "Screen.h"
#include <vector>

using namespace std;

int main(){
  Screen t(10,10);
  Reta r(1,1,8,8);
  t.setPincel('X');
  r.draw(t);
  t.imprimirTela();
  return 0;
}

