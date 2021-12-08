#include <iostream>
using namespace std;
#include "arreglodinamico.h"
int main()
{
    ArregloDinamico arreglodinamico;
    arreglodinamico.push_back("Hermana");
    arreglodinamico.push_back("Mama");
    arreglodinamico.push_front("Hermano");
    arreglodinamico.push_front("Papa");
    arreglodinamico.insert("Bebe",2);
    cout << "numero de elementos: " << arreglodinamico.size() << endl;
    for(size_t i = 0; i < arreglodinamico.size(); i++)
    {
        cout << arreglodinamico[i] << endl;
    }
    arreglodinamico.pop_back();
    arreglodinamico.pop_front();
    arreglodinamico.erase(0);
    cout << "numero de elementos: " << arreglodinamico.size() << endl;
    for(size_t i = 0; i < arreglodinamico.size(); i++)
    {
        cout << arreglodinamico[i] << " ";
    }
    return 0;
}
