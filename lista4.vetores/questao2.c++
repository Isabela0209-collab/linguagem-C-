#include <iostream>
using namespace std;

int main() {
    int v[15];
    for (int i = 0; i < 15; ++i) cin >> v[i];
    int maior = v[0], menor = v[0];
    for (int i = 1; i < 15; ++i) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    cout << "Maior: " << maior << "\nMenor: " << menor << endl;
    return 0;
}