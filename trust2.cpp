#include <cmath>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>
#include <gsl/gsl_sf_hyperg.h> //https://github.com/microsoft/GSL.git
#include "Normal_Distribuition2.h"

int main()
{
    double x, v, x1, x2;
    int v_choice;
    setlocale(LC_ALL, "Portuguese");

    std::cout << "Insira o ponto. " << std::endl;
    std::cin >> x;

    std::cout << "Insira os graus de liberdade. " << std::endl;
    std::cin >> v;

    std::cout << "A probabilidade de um ponto ser p em uma distribuicao T com " << v << " graus de liberdade e: ";
    std::cout << std::setprecision(4) << t_distribution_pdf(x, v) * 100 << "%" << std::endl;

    std::cout << "A probabilidade de um valor estar entre - inf e um certo ponto p em uma distribuicao T com " << v << " graus de liberdade e: ";
    std::cout << std::setprecision(4) << t_distribution_cdf(x, v) * 100 << "%" << std::endl;

    std::cout << "Insira dois pontos. " << std::endl;
    std::cout << "X1 = " << std::endl;
    std::cin >> x1;
    std::cout << "X2 = " << std::endl;
    std::cin >> x2;

    std::cout << "Insira os graus de liberdade. " << std::endl;
    std::cin >> v;

    std::cout << "A probabilidade de um ponto estar entre dois pontos " << x1 << " e " << x2 << " em uma distribuicao - t com " << v << " graus de liberdade eh: ";
    std::cout << std::setprecision(4) << t_distribution_cdf2(x1, x2, v) * 100 << "%" << std::endl;
}