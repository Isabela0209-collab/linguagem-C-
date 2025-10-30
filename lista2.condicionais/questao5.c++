#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco_unitario, dinheiro;
    int quantidade;
    cin >> preco_unitario >> quantidade >> dinheiro;
    double total = preco_unitario * quantidade;
    double troco = dinheiro - total;
    cout << fixed << setprecision(2);
    if (troco < 0.0) {
        cout << "Dinheiro insuficiente. Faltam R$ " << -troco << "\n";
    } else {
        cout << "Troco = R$ " << troco << "\n";
    }
    return 0;
}