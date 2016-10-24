#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>

#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "Interpretador.h"

//Screen :: Screen(int _nlin,int _ncol);

Interpretador :: Interpretador(ifstream &fin, char ed[])
{
    n=0;
    fin.open(ed);
    if(!fin.is_open())
    {
        exit(0);
    }
    string s;
    stringstream ss;
    while(fin.good())
    {
        //cout<<"111"<<endl;
        getline(fin, s);
        if(fin.good())
        {
            ss.clear();
            ss.str(s);
            while(ss.good())
            {


                ss >> s;
                if(s.compare(string("dim"))==0)
                {
                    ss >> linha >> coluna;
                }
                else
                {
                    if(n==0) br.push_back('X');
                    if(s.compare(string("brush"))==0)
                    {
                        char a;
                        ss>>a;
                        br[n]=a;
                    }
                    else if(s.compare(string("line"))==0)
                    {
                        int x0,y0,x1,y1;
                        ss>>x0>>y0>>x1>>y1;
                        figs.push_back(new Reta(x0,y0,x1,y1));
                        br.push_back(br[n]);
                        n++;
                    }
                    else if(s.compare(string("retangle"))==0)
                    {
                        int x0,y0,larg,alt;
                        ss>>x0>>y0>>larg>>alt;
                        figs.push_back(new Retangulo(x0,y0,alt,larg));
                        br.push_back(br[n]);
                        n++;
                    }
                    else if(s.compare(string("circle"))==0)
                    {
                        int x0,y0,r,mode;
                        ss>>x0>>y0>>r>>mode;
                        figs.push_back(new Circulo(x0,y0,r,mode));
                        br.push_back(br[n]);
                        n++;
                    }
                }
            }
        }
    }
    fin.close();
}
int Interpretador::getLinha()
{
    return linha;
}
int Interpretador::getColuna()
{
    return coluna;
}
int Interpretador::getN()
{
    return n;
}
FiguraGeometrica* Interpretador::getFigura(int n)
{
    return figs[n];
}
char Interpretador::getPicel(int n){
    return br[n];
}
