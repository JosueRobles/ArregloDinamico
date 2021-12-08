#include "arreglodinamico.h"
ArregloDinamico::ArregloDinamico()
{
    s = new string[MAX];
    cont = 0;
    tam = MAX;
}
ArregloDinamico::~ArregloDinamico()
{
    delete[] s;
}
void ArregloDinamico::push_back(string v)
{
    if(cont == tam)
    {
        expandir();
    }
    s[cont] = v;
    cont++;
}
void ArregloDinamico::push_front(string v)
{
    if(cont==tam)
    {
        expandir();
    }
    for(size_t i = cont; i > 0; i--)
    {
        s[i] = s[i-1];
    }
    s[0] = v;
    cont++;
}
void ArregloDinamico::insert(const string v, size_t p)
{
    if(p>=cont)
    {
        cout << "Posicion no válida" << endl;
        return;
    }
    if(cont==tam)
    {
        expandir();
    }
    for(size_t i=cont; i>p; i--)
    {
        s[i] = s[i-1];
    }
    s[p] = v;
    cont++;
}
void ArregloDinamico::pop_back()
{
    if(cont==0)
    {
        cout << "Arreglo vacío" << endl;
    return;
    }
    cont--;
}
void ArregloDinamico::pop_front()
{
    if(cont==0)
    {
        cout << "Arreglo vacío" << endl;
        return;
    }
    for(size_t i=0; i<cont-1; i++)
    {
        s[i] = s[i+1];
    }
    cont--;
}
void ArregloDinamico::erase(size_t p)
{
    if(cont == 0)
    {
        cout << "Arreglo vacío" << endl;
        return;
    }
    for(size_t i=p; i<cont-1; i++)
    {
        s[i] = s[i+1];
    }
    cont--;
}
size_t ArregloDinamico::size()
{
    return cont;
}
void ArregloDinamico::expandir()
{
    string *nuevo = new string[tam+MAX];
    for(size_t i=0; i<cont; i++)
    {
        nuevo[i] = s[i];
    }
    delete[] s;
    s = nuevo;
    tam = tam + MAX;
}
