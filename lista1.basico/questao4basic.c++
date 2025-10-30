#include <iostream>

int main() {
    int x, y, soma;

    std::cout << "Digite o valor de X: ";
    std::cin >> x;
    std::cout << "Digite o valor de Y: ";
    std::cin >> y;

    soma = x + y;

    std::cout << "SOMA = " << soma << std::endl;

    return 0;
}