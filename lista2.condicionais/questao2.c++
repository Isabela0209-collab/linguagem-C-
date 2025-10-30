#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0.0) {
        cout << "Nao eh equacao do segundo grau.\n";
        return 0;
    }
    double delta = b*b - 4*a*c;
    if (delta < 0.0) {
        cout << "Nao existem raizes reais\n";
    } else {
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);
        cout << fixed << setprecision(4);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    return 0;
}