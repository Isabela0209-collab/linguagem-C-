#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long fat = 1;
    cin >> n;
    if (n < 0) {
        cout << "Valor invalido\n";
        return 0;
    }
    for (int i = 2; i <= n; ++i) fat *= i;
    cout << fat << endl;
    return 0;
}