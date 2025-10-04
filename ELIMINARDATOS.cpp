#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos números deseas ingresar? ";
    cin >> n;

    vector<int> numeros(n);
    unordered_map<int, int> contador;

    cout << "Ingresa los números:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
        contador[numeros[i]]++;
    }

    vector<int> unicos;
    vector<int> repetidos;

    for (const auto& par : contador) {
        if (par.second == 1) {
            unicos.push_back(par.first);
        } else {
            repetidos.push_back(par.first);
        }
    }

    cout << "\nNúmeros no repetidos:" << endl;
    for (int num : unicos) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Números que se repitieron y fueron eliminados:" << endl;
    for (int num : repetidos) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}