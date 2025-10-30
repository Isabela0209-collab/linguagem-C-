#include <iostream>

int main() {
    int total_segundos, horas, minutos, segundos;

    std::cout << "Digite a duracao em segundos: ";
    std::cin >> total_segundos;

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    std::cout << "DURACAO = " << horas << ":" << minutos << ":" << segundos << std::endl;

    return 0;
}