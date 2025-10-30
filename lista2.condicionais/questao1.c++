#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1, n2, final;
    cin >> n1 >> n2;
    final = n1 + n2;
    cout << fixed << setprecision(1);
    cout << "Nota final = " << final << "\n";
    if (final < 60.0) cout << "REPROVADO\n";
    return 0;
}