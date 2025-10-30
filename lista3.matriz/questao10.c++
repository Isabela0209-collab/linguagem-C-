#include <iostream>
using namespace std;

void somaMatrizes(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            C[i][j] = A[i][j] + B[i][j];
}

int main() {
    int A[3][3], B[3][3], C[3][3];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) cin >> A[i][j];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) cin >> B[i][j];

    somaMatrizes(A, B, C);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) cout << C[i][j] << (j+1<3 ? ' ' : '\n');
    }
    return 0;
}