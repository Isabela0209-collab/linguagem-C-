#include <iostream>
#include <iomanip>

int main() {
    double A, B, C, area_triangulo;

    std::cout << "Digite o valor de A: ";
    std::cin >> A;
    std::cout << "Digite o valor de B: ";
    std::cin >> B;
    std::cout << "Digite o valor de C: ";
    std::cin >> C;

    area_triangulo = (A * B) / 2.0;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "AREA DO TRIANGULO = " << area_triangulo << std::endl;

    return 0;
}