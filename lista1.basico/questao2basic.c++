#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double base, altura, area, perimetro, diagonal;

    std::cout << "Base do retangulo: ";
    std::cin >> base;
    std::cout << "Altura do retangulo: ";
    std::cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = std::sqrt(base * base + altura * altura);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "AREA = " << area << std::endl;
    std::cout << "PERIMETRO = " << perimetro << std::endl;
    std::cout << "DIAGONAL = " << diagonal << std::endl;

    return 0;
}