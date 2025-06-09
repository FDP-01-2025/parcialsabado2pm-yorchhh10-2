#include <iostream>
using namespace std;

int main()
{
    int respuesta, op1, op2, sumita;
    do
    {
        cout << "Ingrese la operacion que desea ralizar";
        cout << "1= Sumar los primeros numeros naturales \n  2= Ingrese numeros y ver cuales son positivos y negativos \n 3=salir" << endl;
        cin >> respuesta;

        switch (respuesta)
        {
        case 1:

            if (respuesta > 1)
            {
                cout << "Ingrese los numeros naturales que desea sumar";
                cin >> op1;
                cout << "Ingrese la segunda cantidad a sumar";
                cin >> op2;
                sumita = op1 + op2;
                cout << "La respuesta a su suma es " << sumita << endl;
            }
            else if (respuesta < 0)
            {
                cout << "Ingrese un numero natural porfavor";
            }

            break;

        case 2:
            int numero;
            int positivo = 0, negativo = 0;
            do
            {
                cout << "Ingrese los numeros que desea ver si son positivos o negativos";
                if (numero > 0)
                {
                    positivo++;
                }
                else if (numero < 0)
                {
                    negativo++;
                }

            } while (numero != 0);

            cout << "Cantidad de numeros positivos: " << positivo << endl;
            cout << "Cantidad de numeros negativos: " << negativo << endl;

            break;
        case 3:
            cout << "salir";
            break;

        default:
            cout << "Ingrese una opcion valida";
            break;
        }

    } while (respuesta > 4);
    cout << "Ingrese un numero valido";
    return 0;
}