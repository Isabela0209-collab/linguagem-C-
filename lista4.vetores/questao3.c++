#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double v[8], soma = 0.0;
    for (int i = 0; i < 8; ++i) { cin >> v[i]; soma += v[i]; }
    double media = soma / 8.0;
    cout << fixed << setprecision(2) << media << endl;
    return 0;
}