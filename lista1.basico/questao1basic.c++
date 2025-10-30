#include <iostream>
#include <iomanip>

int main() {
    double largura, comprimento, valor_m2, area, preco;

    std::cout << "Digite a largura do terreno: ";
    std::cin >> largura;
    std::cout << "Digite o comprimento do terreno: ";
    std::cin >> comprimento;
    std::cout << "Digite o valor do metro quadrado: ";
    std::cin >> valor_m2;

    area = largura * comprimento;
    preco = area * valor_m2;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Area do terreno = " << area << std::endl;
    std::cout << "Preco do terreno = " << preco << std::endl;

    return 0;
}