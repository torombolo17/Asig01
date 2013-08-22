#include <iostream>
#include "fracArray.h"

using namespace std;
 
int main() {
    ArrayOfFractions L;
 
    cout << "Contenido de L:" << endl;
    L.printA();
 
    cout << "Maximo, minimo y suma de elementos en L" << endl;
    L.max().print();
    L.min().print();
    L.sumA().print(); 
 
 
    L.sortA();
    cout << "Contenido de L, luego de ordenado" << endl;
    L.printA();
    
    return 0;
}
