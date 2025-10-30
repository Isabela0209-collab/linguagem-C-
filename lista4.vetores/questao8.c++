#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 0) return 0;
    unsigned long long a = 0, b = 1;
    for (int i = 1; i <= n; ++i) {
        if (i == 1) cout << a;
        else if (i == 2) { cout << ' ' << b; }
        else {
            unsigned long long c = a + b;
            cout << ' ' << c;
            a = b; b = c;
        }
    }
    cout << endl;
    return 0;
}