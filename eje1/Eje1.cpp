#include "Eje1.h"
#include <iostream>
#include <vector>

void Ejercicio1() {
    std::vector<int> numeros;

    // Añadir elementos mediante push_back
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);

    // Recorrer con iteradores
    for (std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }

}