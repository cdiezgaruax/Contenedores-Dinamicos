#include "Eje5.h"
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm> // std::for_each

void Eje5() {
    // Lambda que calcula el cuadrado de un número
    auto cuadrado = [](int num) { return num * num; };
    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    // Uso de auto para inferencia de tipo
    auto numeros = std::vector<int>{1, 2, 3, 4, 5};

    // Recorrer con for_each y lambda
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << "Elemento: " << num << std::endl;
    });

    // Uso de punteros inteligentes
    std::shared_ptr<int> ptr = std::make_shared<int>(10);
    std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;

}