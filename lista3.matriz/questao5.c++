#include <iostream>
using namespace std;

int main() {
    int m[3][2], t[2][3];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 2; ++j)
            cin >> m[i][j];

    // transposta 2x3
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            t[i][j] = m[j][i];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) cout << t[i][j] << (j+1<3 ? ' ' : '\n');
    }
    return 0;
}