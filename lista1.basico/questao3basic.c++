#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string nome1, nome2;
    int idade1, idade2;

    std::cout << "Dados da primeira pessoa:\n";
    std::cout << "Nome: ";
    std::getline(std::cin, nome1);
    std::cout << "Idade: ";
    std::cin >> idade1;
    std::cin.ignore(); // Limpa o buffer

    std::cout << "Dados da segunda pessoa:\n";
    std::cout << "Nome: ";
    std::getline(std::cin, nome2);
    std::cout << "Idade: ";
    std::cin >> idade2;

    double media = (idade1 + idade2) / 2.0;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "A idade media de " << nome1 << " e " << nome2 << " eh " << media << " anos.\n";

    return 0;
}