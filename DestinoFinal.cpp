#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Estudiante
{
    int id;
    string nombre;
    int edad;
};
Estudiante estudiantes[10];
int total = 0;
void agregar()
{
    cout << "ID: ";
    cin >> estudiantes[total].id;
    cout << "Nombre: ";
    cin >> estudiantes[total].nombre;
    cout << "Edad: ";
    cin >> estudiantes[total].edad;
    total++;
    cout << "Agregado!\n";
}
void mostrar()
{
    cout << "\n--- ESTUDIANTES ---\n";
    for (int i = 0; i < total; i++)
    {
        // Manejo de Archivos 5
        cout << estudiantes[i].id << " - "
             << estudiantes[i].nombre << " - "
             << estudiantes[i].edad << " años\n";
    }
}
void buscar()
{
    int buscarId;
    cout << "ID buscar";
    cin >> buscarId;
    for (int = 0; 1 < total; i++)
    {
        if (buscarId == estudiantes[i].id)
        {
            cout << "estudainte encontrado /n";
            cout << estudiantes[i].id << " "
                 << estudiantes[i].nombre << " "
                 << estudiantes[i].edad << " " return;
        }
        < -#45 - 51 if (buscarId == estudiantes[i].id)
    }
}
}
void guardar()
{
    ofstream archivo("estudiantes.txt");
    archivo << total << endl;
    for (int i = 0; i < total; i++)
    {
        archivo << estudiantes[i].id << " "
                << estudiantes[i].nombre << " "
                << estudiantes[i].edad << endl;
    }
    archivo.close();
}
void cargar()
{
    ifstream archivo("estudiantes.txt");
    if (archivo.is_open())
    {
        archivo >> total;
        for (int i = 0; i < total; i++)
        {
            archivo >> estudiantes[i].id >> estudiantes[i].nombre >> estudiantes[i].edad;
        }
        archivo.close();
    }
}
int main()
{

    cargar();
    int op;
    do
    {
        cout << "\n1.Agregar 2.Mostrar 3.Buscar 4.Salir\n";
        cin >> op;
        if (op == 1)
            agregar();
        else if (op == 2)
            mostrar();
        else if (op == 3)
            buscar();
        else if (op == 4)
        {
            guardar();
            break;
        }
        while (true)
            ;
        return 0;
    }
}