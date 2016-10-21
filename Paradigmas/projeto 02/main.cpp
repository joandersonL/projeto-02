#include <iostream>
#include "retangulo.h"
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "Screen.h"
#include <vector>

using namespace std;

int main(){
  Screen t(100,100);
  Reta re(0,0,5,5);
  Retangulo r(6,10,5,3);
  Circulo c(50,50,20);
  r.draw(t);
  re.draw(t);
  c.draw(t);
  t.imprimirTela();
  return 0;
}

