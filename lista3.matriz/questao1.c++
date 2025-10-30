#include <iostream>
using namespace std;

int somaTotal(int m[3][3]) {
    int s = 0;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            s += m[i][j];
    return s;
}

int main() {
    int m[3][3];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> m[i][j];
    cout << somaTotal(m) << endl;
    return 0;
}