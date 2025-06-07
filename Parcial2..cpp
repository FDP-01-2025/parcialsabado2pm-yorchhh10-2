    #include <iostream>
    #include <string> // Ocupe esta biblioteca para qu epueda leer el nombre que ingrese
    using namespace std;

    int main()
    {
        int nombre; // Ocupe string para que pueda leer el nombre y no me error y no deje de leer el nombre que ingrese
        int codigo;
        cout << "Ingrese su nombre: ";
        cin>> nombre;

        cout<<"Hola " << nombre << " Escriba el numero de codigo dependiendo el tipo de usuario que sea \n";
        cout<< "1= Admin \n 2=Editor \n 3= Viewer \n 4= Alumno \n 5= Profesor \n ";
        cin>> codigo;

        switch (codigo)
        {
        case 1:
            cout<<"Usted ah seleccionado el codigo de Admin"<< endl;
            cout<<"!Tenga un buen dia¡";
            break;
        case 2:
            cout<<"Usted ah seleccionado el codigo de Editor"<< endl;
            cout<<"!Espero te sea facil editarlo¡";
            break;
            case 3:
            cout<<"Usted ah seleccionado el codigo de Viewer"<< endl;
            cout<<"!Disfrute que esto lo creamos para usted¡";
            break;
            case 4:
            cout<<"Usted ah seleccionado el codigo de Alumno"<< endl;
            cout<<"!Pasa el parcial por mi¡";
            break;
            case 5:
            cout<<"Usted ah seleccionado el codigo de Profesor"<< endl;
            cout<<"!El parcial es en parejas, usted y Dios¡";
            break;
        default:
        cout << "Seleccione un codigo valido, porfavor ";
            break;
        }

            return 0;
    }