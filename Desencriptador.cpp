#include <iostream>
#include <vector>
using namespace std;
int main() {
int cantidad;
cout << "Equipo: Pedro, Santiago y Diego" << endl;
cout << endl;
cout << "Bienvenido al decodificador de codificacion numerica invertida" << endl;
cout << endl;
cout << "Cuantos conjuntos de numeros tiene tu mensaje (ej: 111 222 son dos conjuntos): ";
cin >> cantidad;
vector<int> arreglo(cantidad);
cout << "Ingresa los numeros separados por espacio (ej: 111 97 100): " << endl;
for(int i = 0; i < cantidad; i++) {
cin >> arreglo[i];
}
return 0;
}
