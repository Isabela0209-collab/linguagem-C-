#include <iostream>
#include <iomanip>

int main() {
    double preco_unitario, dinheiro, troco;
    int quantidade;

    std::cout << "Preco unitario do produto: ";
    std::cin >> preco_unitario;
    std::cout << "Quantidade comprada: ";
    std::cin >> quantidade;
    std::cout << "Dinheiro recebido: ";
    std::cin >> dinheiro;

    troco = dinheiro - (preco_unitario * quantidade);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "TROCO = " << troco << std::endl;

    return 0;
}