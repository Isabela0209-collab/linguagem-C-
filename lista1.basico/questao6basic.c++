#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double r, area;

    std::cout << "Digite o valor do raio: ";
    std::cin >> r;

    area = M_PI * r * r;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "AREA = " << area << std::endl;

    return 0;
}