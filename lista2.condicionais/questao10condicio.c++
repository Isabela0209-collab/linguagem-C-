#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite dois numeros inteiros: ";
    cin >> a >> b;

    bool multiplos = (b != 0 && a % b == 0) || (a != 0 && b % a == 0);
    if (a == 0 && b == 0) multiplos = true;

    if (multiplos)
        cout << "Sao multiplos" << endl;
    else
        cout << "Nao sao multiplos" << endl;

    return 0;
}
