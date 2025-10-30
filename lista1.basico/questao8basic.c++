#include <iostream>
#include <iomanip>

int main() {
    double distancia, combustivel, consumo_medio;

    std::cout << "Distancia percorrida: ";
    std::cin >> distancia;
    std::cout << "Combustivel gasto: ";
    std::cin >> combustivel;

    consumo_medio = distancia / combustivel;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Consumo medio = " << consumo_medio << std::endl;

    return 0;
}