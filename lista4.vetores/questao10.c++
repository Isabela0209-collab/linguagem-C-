#include <iostream>
using namespace std;

int main() {
    int A[5], B[5];
    for (int i = 0; i < 5; ++i) cin >> A[i];
    for (int i = 0; i < 5; ++i) cin >> B[i];
    long long produto = 0;
    for (int i = 0; i < 5; ++i) produto += 1LL * A[i] * B[i];
    cout << produto << endl;
    return 0;
}