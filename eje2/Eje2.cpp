#include "Eje2.h"
#include <iostream>
#include <list>
#include <stack>

void Eje2() {
    std::list<float> lista = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

    // Creamos la pila utilizando la lista como contenedor subyacente
    std::stack<float, std::list<float>> pila(lista);

    // Mostrar los elementos haciendo pop
    while (!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }

}