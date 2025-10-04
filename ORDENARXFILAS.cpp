#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int matriz[3][3];

    // Ingresar los números en la matriz
    cout << "Ingresa los 9 numeros para la matriz 3x3:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matriz[i][j];
        }
    }

    // Ordenar cada fila de menor a mayor
    for (int i = 0; i < 3; ++i) {
        sort(matriz[i], matriz[i] + 3);
    }

    // Mostrar la matriz ordenada
    cout << "\nMatriz ordenada por filas:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}