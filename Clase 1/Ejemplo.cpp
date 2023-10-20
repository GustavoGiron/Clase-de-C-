#include <iostream>
#include <string>
using namespace std;

int main()
{
    int edad[3];
    string nombre[3];
    string apellido[3];
    string estado;
    int opcion;
    bool bandera = true;
    int contador = 0;

    while (bandera)
    {
        cout << "-- SELECCIONE UNA OPCION -- " << endl;
        cout << " | 1. Ingreso de datos | " << endl;
        cout << " | 2. Mostrar datos | " << endl;
        cout << " | 3. Validacion de datos | " << endl;
        cout << " | 4. Salir | " << endl;
        cout << " ->> " ;
        cin >> opcion ; 

        switch (opcion)
        {
        case 1: // INGRESO DE DATOS
            cout << "Por favor ingrese su Nombre:" << endl;
            cin >> nombre[contador];

            cout << "Por favor ingrese un Apellido:" << endl;
            cin >> apellido[contador];

            cout << "Por favor ingrese su Edad:" << endl;
            cout << "" << endl;
            cin >> edad[contador];
            contador++;
            break;
        case 2: // Mostrar los datos
            cout << "Indique el numero de persona" << endl;
            int cotador2;
            cin >> cotador2;
            cout << "------ Identificacion ------" << endl;
            cout << "| Nombre: " << nombre[cotador2] << " |" << endl;
            cout << "| Apellido: " << apellido[cotador2] << " |" << endl;
            cout << "| Edad:" << edad[cotador2] << " |" << endl;
            break;
        case 3: // Validacion de datos
            cout << "Indique el numero de persona" << endl;
            int cotador3;
            cin >> cotador3;
            if (edad[cotador3] >= 18)
            {
                estado = "Mayor de edad";
            }
            else
            {
                estado = "Menor de edad";
            }
            cout << "El usuario con nombre: " << nombre[cotador3] << ", es "<< estado << ". Verifique sus datos." << endl;

            break;
        case 4:// SALIDA
            cout << "Seliendo del Menu" << endl;
            bandera = false;
            return 0;
        default:
            cout << "Opcion seleccionada no es valida" << endl;
        }
    }

    

    return 0;
}