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
    cin >> cantidad; //entrada del usuario para que el decriptador leea

    vector<int> arreglo(cantidad);

    cout << "Ingresa los numeros separados por espacio (ej: 111 97 100): " << endl; //muestra el texto en pantalla para que el usuario entienda
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
    //ordena el codigo al orden que mas sentido tiene 
    for(int i = 0; i < cantidad; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    cout << "Mensaje decifrado: ";
    // Se convierte a caracteres mas complejos (numeros o letras)
    for(int i = 0; i < cantidad; i++) {
        cout << char(arreglo[i]);
    }
    cout << endl << endl;

    return 0;
}
