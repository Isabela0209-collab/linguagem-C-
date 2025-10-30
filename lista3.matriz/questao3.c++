#include <iostream>
using namespace std;

int somaLinha(int m[5][5], int linha) {
    int s = 0;
    for (int j = 0; j < 5; ++j) s += m[linha][j];
    return s;
}

int main() {
    int m[5][5];
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
            cin >> m[i][j];
    int linha; // 0..4
    cin >> linha;
    if (linha < 0 || linha > 4) {
        cout << "Linha invalida\n";
        return 0;
    }
    cout << somaLinha(m, linha) << endl;
    return 0;
}