#include <iostream>
#include <string>

using namespace std;

int op;
int opcrgn;
int pr[3];
int i;
int z;
int r;
string nombres[3][6];

void agregar();
void salir();
void precio();
void limpiar();
void ver();

int main()
{
    do
    {
        cout << "===========MENU===========\n" << endl;
        cout << "1) Agregar" << endl;
        cout << "2) Modificar" << endl;
        cout << "3) Ver Art\241culos" << endl;
        cout << "4) Eliminar" << endl;
        cout << "5) Limpiar" << endl;
        cout << "6) Salir\n" << endl;
        cout << "Qu\202 acci\242n desea realizar?\n";
        cin >> op;
        switch (op)
        {
        case 1: {
            i = 0;
            z = 1;
            system("cls");
            agregar();
            r = 5;
            break;
        }
        case 3: {
            system("cls");
            ver();
            r = 5;
            break;
        }
        case 5: {
            limpiar();
            r = 5;
            break;
        }
        case 6: {
            salir();
            return(0);
            break;
        }

        }
        r = 6;
    } while (r == 5);
}

void agregar() {
    cout << "N\243mero de videojuego: " << z << endl; z++;
    cout << "Introduzca el nombre del videojuego: ";
    cin >> nombres[i][5];
    cout << "Introduzca el anio de lanzamiento: ";
    cin >> nombres[i][4];
    cout << "Introduzca la clasificaci\242n: ";
    cin >> nombres[i][3];
    cout << "Introduzca las caracter\241sticas: ";
    cin >> nombres[i][2];
    cout << "Introduzca la descripci\242n: ";
    cin >> nombres[i][1];
    cout << "Introduzca el g\202nero: ";
    cin >> nombres[i][0];
    cout << "Introduzca el precio: ";
    cin >> pr[i];
    cout << endl;
    precio();

}

void precio() {
    cout << "Nombre: " << nombres[i][5] << endl;
    cout << "Ano de lanzamiento: " << nombres[i][4] << endl;
    cout << "Clasificaci\242n: " << nombres[i][3] << endl;
    cout << "Caracter\241sticas: " << nombres[i][2] << endl;
    cout << "Descripci\242n: " << nombres[i][1] << endl;
    cout << "G\202nero: " << nombres[i][0] << endl;
    cout << "El precio es de: $" << pr[i] << endl;
    cout << endl;
    cout << "Si desea agregar otro videojuego digite 1" << endl;
    cout << "Si desea regresar al menu digite 2" << endl;
    cin >> op;
    system("cls");
    if (op == 1 && i < 2) {
        i++;
        agregar();
    }
    if (op == 2) {
        main();
    }
}

void ver() {
    cout << "===========LISTA===========\n" << endl;
    for (int j = 0; j < 3; j++)
    {
        cout << "Juego n\243mero " << j + 1 << endl;
        cout << "Nombre: " << nombres[j][5] << endl;
        cout << "Ano de lanzamiento: " << nombres[j][4] << endl;
        cout << "Clasificaci\242n: " << nombres[j][3] << endl;
        cout << "Caracter\241sticas: " << nombres[j][2] << endl;
        cout << "Descripci\242n: " << nombres[j][1] << endl;
        cout << "G\202nero: " << nombres[j][0] << endl;
        cout << "El precio es de: $" << pr[j] << endl;
        cout << endl;
        if (j != 2)
        {
            if (nombres[j + 1][5] == "")
            {
                j = 4;
            }
        }
        else {
            j = 4;
        }
    }
    cout << "Digite cualquier numero para regresar al menu" << endl;
    cin >> opcrgn;
    system("cls");
    main();
}

void limpiar() {
    system("cls");
}

void salir() {
    op = 6;
}