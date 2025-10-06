#include <iostream>
using namespace std;

int main () {
int opcion;

do {
    cout <<"===Menú==="<< endl;
cout << "1. Tortas" << endl;
cout << "2. Palomitas" << endl;
cout << "3. Agua" << endl;
cout << "4. Salir" << endl;
cout << "Elige una opción 1, 2, 3, o 4: " << endl;
cin >> opcion;

if (opcion == 1){
    cout << "Elegiste Torta" << endl;
    cout << "Precio: $30" << endl;
}
else if (opcion == 2){
    cout << "Elegiste Palomitas" << endl;
    cout << "Precio: $15" << endl;
}
else if (opcion == 3){
    cout << "Elegiste Agua (600ml)" << endl;
    cout << "Precio: $10" << endl;
}
else if (opcion == 4){
    cout << "Salir del menú" << endl;
}
else {
    cout << "Opción no válida" << endl;
}
} while (opcion != 4);

}