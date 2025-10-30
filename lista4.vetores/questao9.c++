#include <iostream>
using namespace std;

int main() {
    int A[5], B[5], C[10];
    for (int i = 0; i < 5; ++i) cin >> A[i];
    for (int i = 0; i < 5; ++i) cin >> B[i];
    for (int i = 0; i < 5; ++i) { C[2*i] = A[i]; C[2*i+1] = B[i]; }
    for (int i = 0; i < 10; ++i) cout << C[i] << (i+1<10 ? ' ' : '\n');
    return 0;
}