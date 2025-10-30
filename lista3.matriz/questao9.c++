#include <iostream>
using namespace std;

int main() {
    int m[3][3];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> m[i][j];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3/2; ++j) {
            int tmp = m[i][j];
            m[i][j] = m[i][2-j];
            m[i][2-j] = tmp;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) cout << m[i][j] << (j+1<3 ? ' ' : '\n');
    }
    return 0;
}