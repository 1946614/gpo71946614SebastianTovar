#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numvideojuego, opcion;
    float precio_unitario, total, iv;
    string videojuego, descripcion, categoria;

    cout << "\t ***PLANET GAMERS*** \n";
    cout << " 1.-Agregar Videojuego \n 2.-Modificar Videojuego\n 3.-Eliminar Videojuego\n 4.-Lista Videojuego\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Videojuego
        cout << "Ingrese el numero de videojuego\n";
        cin >> numvideojuego;
        cout << "ingrese el nombre del videojuego\n";
        cin.ignore();//me ignora el primer espacio 
        getline(cin, videojuego); //permite ejecutar los espacios en la variable
        cout << "ingrese el descripcion del videojuego\n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "ingrese la categoria del videojuego\n";
        cin.ignore();
        getline(cin, categoria);
        cout << "ingrese el precio unitario del videojuego\n";
        cin >> precio_unitario;
        precio_unitario*0.16= iv;
        precio_unitario+iv=total;
        cout << "su total es\n";
        cin >> total;
        return main();
        break;

    case 2: //Modificar Videojuego
        break;

    case 3://Eliminar Videojuego
        break;

    case 4: //Lista de Videojuego
        break;

    case 5: //Limpiar Pantalla
        system("clear"); 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por visitar PLANET GAMERS \n";
        break;

    default:
        cout << "ingrese opcion correcta \n";
        return main();

    }

