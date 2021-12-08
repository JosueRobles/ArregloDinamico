#include <iostream>
using namespace std;
#include "arreglodinamico.h"
int main()
{
    ArregloDinamico arreglodinamico;
    arreglodinamico.push_back("Mama");
    arreglodinamico.push_front("Papa");
    arreglodinamico.insert("Bebe",1);
    cout << endl;
    cout << "numero de elementos: " << arreglodinamico.size() << endl;
    for(size_t i = 0; i < arreglodinamico.size(); i++)
    {
        cout << arreglodinamico[i] << " ";
    }
    arreglodinamico.pop_back();
    arreglodinamico.pop_front();
    arreglodinamico.erase(3);
    cout << "numero de elementos: " << arreglodinamico.size() << endl;
    for(size_t i = 0; i < arreglodinamico.size(); i++)
    {
        cout << arreglodinamico[i] << " ";
    }
    return 0;
}
