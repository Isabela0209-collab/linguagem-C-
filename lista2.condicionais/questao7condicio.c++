#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double t1, t2, t3, maior;

    cout << "Digite as tres distancias (separadas por espaco ou enter): ";
    cin >> t1 >> t2 >> t3;

    maior = t1;
    if (t2 > maior) maior = t2;
    if (t3 > maior) maior = t3;

    cout << fixed << setprecision(2);
    cout << "Maior distancia = " << maior << endl;
    return 0;
}
