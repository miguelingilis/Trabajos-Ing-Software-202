#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 3;
    int matriz[N][N][N];
    double promedios[N] = {0};

    // Ingreso de datos
    cout << "Ingresa los datos para una matriz 3x3x3:" << endl;
    for (int k = 0; k < N; ++k) {
        cout << "Capa " << k + 1 << ":" << endl;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << "Elemento [" << i << "][" << j << "][" << k << "]: ";
                cin >> matriz[i][j][k];
                promedios[k] += matriz[i][j][k];
            }
        }
        promedios[k] /= (N * N);
    }

    // Mostrar matriz y promedios por capa
    cout << fixed << setprecision(2);
    for (int k = 0; k < N; ++k) {
        cout << "\nCapa " << k + 1 << ":" << endl;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << matriz[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << "Promedio de la capa " << k + 1 << ": " << promedios[k] << endl;
    }

    return 0;
}