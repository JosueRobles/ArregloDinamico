#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H
#include <iostream>
using namespace std;
class ArregloDinamico
{
    string *s;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;
public:
    ArregloDinamico();
    ~ArregloDinamico();
    void push_back(const string v);
    void push_front(const string v);
    size_t size();
    void insert(const string v, size_t p);
    void pop_back();
    void pop_front();
    void erase(size_t p);
    string operator[](size_t p)
    {
        return s[p];
    }
private:
    void expandir();
};
#endif
