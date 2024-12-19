#include <locale>
#include <iostream>
#include "eje1/Eje1.h"
#include "eje2/Eje2.h"
#include "eje3/Eje3.h"
#include "eje4/Eje4.h"
#include "eje5/Eje5.h"
#include "eje6/Eje6.h"

int main() {

        std::locale::global(std::locale(""));

        int opt = 0;

        std::cout << "Elija el ejercicio a ejecutar: ";
        std::cin >> opt;

        switch (opt) {
                case 1: Eje1(); break;
                case 2: Eje2(); break;
                case 3: Eje3(); break;
                case 4: Eje4(); break;
                case 5: Eje5(); break;
                case 6: Eje6(); break;


                default:
                        std::cout << "Ejercicio no encontrado" << std::endl;
        }

        return 0;
}