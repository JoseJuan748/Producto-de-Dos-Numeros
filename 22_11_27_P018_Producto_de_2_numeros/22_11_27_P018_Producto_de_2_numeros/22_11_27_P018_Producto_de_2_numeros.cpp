// 22_11_27_P018_Producto_de_2_numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez

#include <iostream>

int producto2num(int num1, int num2)
{
    if (num1 == 0 or num2 == 0)
        return 0;
    else
    {
        return num1 + producto2num(num1, num2 - 1);
    }
}

int main()
{
    int numero1, numero2, producto;

    std::cout << "Introduzca el primer numero:";
    std::cin >> numero1;
    std::cout << "Introduzca el segundo numero:";
    std::cin >> numero2;
    producto = producto2num(numero1, numero2);
    std::cout << "El resultado es:" << producto << std::endl;
    system("pause");
    system("cls");

    return main();
}

