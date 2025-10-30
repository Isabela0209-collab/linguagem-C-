#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string nome;
    double valor_hora, horas_trabalhadas, pagamento;

    std::cout << "Nome: ";
    std::getline(std::cin, nome);
    std::cout << "Valor por hora: ";
    std::cin >> valor_hora;
    std::cout << "Horas trabalhadas: ";
    std::cin >> horas_trabalhadas;

    pagamento = valor_hora * horas_trabalhadas;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "O pagamento para " << nome << " deve ser " << pagamento << std::endl;

    return 0;
}