#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int minutos;
    cin >> minutos;
    double valor = 50.0;
    if (minutos > 100) valor += (minutos - 100) * 2.0;
    cout << fixed << setprecision(2);
    cout << "Valor a pagar = R$ " << valor << "\n";
    return 0;
}