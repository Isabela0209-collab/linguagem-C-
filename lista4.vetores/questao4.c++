#include <iostream>
using namespace std;

int main() {
    int v[20], pares = 0, impares = 0;
    for (int i = 0; i < 20; ++i) {
        cin >> v[i];
        if (v[i] % 2 == 0) ++pares; else ++impares;
    }
    cout << "Pares: " << pares << "\nImpares: " << impares << endl;
    return 0;
}