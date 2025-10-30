#include <iostream>
using namespace std;

int main() {
    int m[3][3];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> m[i][j];

    int soma_principal = 0, soma_secundaria = 0;
    for (int i = 0; i < 3; ++i) {
        soma_principal += m[i][i];
        soma_secundaria += m[i][2 - i];
    }

    cout << soma_principal << '\n' << soma_secundaria << '\n';
    return 0;
}