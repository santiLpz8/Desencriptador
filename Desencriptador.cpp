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

    // Se invierten los extremos
    for(int i = 0; i < cantidad / 2; i++) {
        int auxiliar = arreglo[i];
        arreglo[i] = arreglo[cantidad - 1 - i];
        arreglo[cantidad - 1 - i] = auxiliar;
    }

    cout << "Arreglo ordenado correctamente: ";
    for(int i = 0; i < cantidad; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    cout << "Mensaje decifrado: ";
    // Se convierte a caracteres
    for(int i = 0; i < cantidad; i++) {
        cout << char(arreglo[i]);
    }
    cout << endl << endl;

    return 0;
}
