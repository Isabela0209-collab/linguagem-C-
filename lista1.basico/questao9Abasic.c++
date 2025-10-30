#include <iostream>
#include <iomanip>

int main() {
    double A, B, C, area_quadrado;

    std::cout << "Digite o valor de A: ";
    std::cin >> A;
    std::cout << "Digite o valor de B: ";
    std::cin >> B;
    std::cout << "Digite o valor de C: ";
    std::cin >> C;

    area_quadrado = A * A;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "AREA DO QUADRADO = " << area_quadrado << std::endl;

    return 0;
}