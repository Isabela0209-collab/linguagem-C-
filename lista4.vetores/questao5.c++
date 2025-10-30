#include <iostream>
using namespace std;

int main() {
    int v[10], chave;
    for (int i = 0; i < 10; ++i) cin >> v[i];
    cin >> chave;
    bool encontrado = false;
    for (int i = 0; i < 10; ++i) if (v[i] == chave) { encontrado = true; break; }
    if (encontrado) cout << "ENCONTRADO\n"; else cout << "NAO ENCONTRADO\n";
    return 0;
}