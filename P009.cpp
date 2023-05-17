// P009.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JULIO CESAR ESPINOZA VASQUEZ

#include <iostream>

int main()
{
    int op;
    float num1, num2;

    std::cout << "Seleccione la operacion a realizar: \n";
    std::cout << "1. Suma \n";
    std::cout << "2. Resta \n";
    std::cout << "3. Multiplicacion \n";
    std::cout << "4. Division \n";
    std::cout << "5. Valor Absoluto \n";
    std::cout << "6. Mayor y menor que \n";
    std::cin >> op;

    switch (op) {
    case 1: // Suma
        std::cout << "Ingrese el primer numero: \n";
        std::cin >> num1;
        std::cout << "Ingrese el segundo numero: \n";
        std::cin >> num2;
        std::cout << "El resultado es: " << num1 + num2 << std::endl;
        break;
    case 2: // Resta
        std::cout << "Ingrese el primer numero: \n";
        std::cin >> num1;
        std::cout << "Ingrese el segundo numero: \n";
        std::cin >> num2;
        std::cout << "El resultado es: " << num1 - num2 << std::endl;
        break;
    case 3: // Multiplicacion
        std::cout << "Ingrese el primer numero: \n";
        std::cin >> num1;
        std::cout << "Ingrese el segundo numero: \n";
        std::cin >> num2;
        std::cout << "El resultado es: " << num1 * num2 << std::endl;
        break;
    case 4: // Division
        std::cout << "Ingrese el primer numero: \n";
        std::cin >> num1;
        std::cout << "Ingrese el segundo numero: \n";
        std::cin >> num2;
        if (num2 == 0) {
            std::cout << "Error: division por cero \n";
        }
        else {
            std::cout << "El resultado es: " << num1 / num2 << std::endl;
        }
        break;
    case 5: // Valor Absoluto
        float num;
        std::cout << "Ingrese un numero: \n";
        std::cin >> num;
        if (num >= 0) {
            std::cout << "El valor absoluto es: " << num << std::endl;
        }
        else {
            std::cout << "El valor absoluto es: " << -num << std::endl;
        }
        break;
    case 6: // Mayor y menor que
        std::cout << "Ingrese el primer numero: \n";
        std::cin >> num1;
        std::cout << "Ingrese el segundo numero: \n";
        std::cin >> num2;
        if (num1 > num2) {
            std::cout << num1 << " es mayor que " << num2 << std::endl;
        }
        else if (num1 < num2) {
            std::cout << num1 << " es menor que " << num2 << std::endl;
        }
        else {
            std::cout << num1 << " es igual que " << num2 << std::endl;
        }
        break;
    default: // Caso de opcion invalida
        std::cout << "Opcion invalida \n";
        break;
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
