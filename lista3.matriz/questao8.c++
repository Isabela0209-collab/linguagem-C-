#include <iostream>
using namespace std;

int contaOcorrencias(int m[4][4], int num) {
    int c = 0;
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            if (m[i][j] == num) ++c;
    return c;
}

int main() {
    int m[4][4], x;
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            cin >> m[i][j];
    cin >> x;
    cout << contaOcorrencias(m, x) << endl;
    return 0;
}