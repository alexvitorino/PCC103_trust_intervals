//PCC103 - Exercício_01 - Intevalos de Confianca
#include <cmath>
#include <iomanip>
#include <iostream>
#include <locale.h>
#include <vector>
#include "Normal_Distribuition.h"


int main()
{
    double mu;
    double std_dev;
    int option1;
    int option2;
    setlocale(LC_ALL, "Portuguese");

    std::cout << "Selecione a opcao desejada para calcular: " << std::endl;
    std::cout << "  " << "1.: A probabilidade de um ponto estar entre -inf e um certo ponto p." << std::endl;
    std::cout << "  " << "2.: A probabilidade de um ponto estar entre dois pontos x1 e x2 em uma distribuicao normal" << std::endl;

    std::cin >> option1;

    
    if (option1 == 1) {
        std::cout << "Selecione uma opcao para calcular a probabilidade de um ponto estar entre -inf e um certo ponto p: " << std::endl;
        std::cout << "  " << "1.: Para inserir o ponto, media e desvio padrao." << std::endl;
        std::cout << "  " << "2.: Para inserir somente o ponto(media = 0 e desvio padrao = 1)" << std::endl;

        std::cin >> option2;

        double x;

        if (option2 == 1) {
            std::cout << "Insira o ponto. " << std::endl;
            std::cin >> x;

            std::cout << "Insira a media. " << std::endl;
            std::cin >> mu;

            std::cout << "Insira o desvio padrao. " << std::endl;
            std::cin >> std_dev;

            std::cout << "A probabilidade do ponto " << x << " estar entre -inf e um certo ponto p e de: ";
            std::cout << std::setprecision(4) << normal_distribution_cdf1(x, mu, std_dev) * 100 << "%" << std::endl;

        }
        else if (option2 == 2) {
            std::cout << "Insira o ponto. " << std::endl;
            std::cin >> x;

            std::cout << "A probabilidade do ponto " << x << " estar entre -inf e um certo ponto p e de: ";
            std::cout << std::setprecision(4) << normal_distribution_cdf2(x) * 100 << "%" << std::endl;
        }
        else{
        std::cout << "Opcao Invalida! " << std::endl;
    }
    }
    else if (option1 == 2) {
        std::cout << "Selecione uma opcao para calcular a probabilidade de um ponto estar entre dois pontos x1 e x2 em uma distribuicao normal: " << std::endl;
        std::cout << "  " << "1.: Para inserir dois pontos, media e desvio padrao." << std::endl;
        std::cout << "  " << "2.: Para inserir somente os dois pontos (media = 0 e desvio padrao = 1)" << std::endl;

        std::cin >> option2;

        double x1;
        double x2;

        if (option2 == 1) {

            std::cout << "Insira o ponto x1. " << std::endl;
            std::cin >> x1;

            std::cout << "Insira o ponto x2. " << std::endl;
            std::cin >> x2;

            std::cout << "Insira a media. " << std::endl;
            std::cin >> mu;

            std::cout << "Insira o desvio padrao. " << std::endl;
            std::cin >> std_dev;

            std::cout << "A probabilidade do ponto estar entre " << x1 << " e " << x2 << " em uma distribuicao normal e de: ";
            std::cout << std::setprecision(4) << normal_distribution_cdf3(x1, x2, mu, std_dev) * 100 << "%" << std::endl;

        }
        else if (option2 == 2) {
            std::cout << "Insira o ponto x1. " << std::endl;
            std::cin >> x1;

            std::cout << "Insira o ponto x2. " << std::endl;
            std::cin >> x2;

            std::cout << "A probabilidade do ponto estar entre " << x1 << " e " << x2 << " em uma distribuicao normal e de: ";
            std::cout << std::setprecision(4) << normal_distribution_cdf4(x1, x2) * 100 << "%" << std::endl;
        }
        else{
        std::cout << "Opcao Invalida! " << std::endl;
    }
    }
    else{
        std::cout << "Opcao Invalida!" << std::endl;
    }

    
}//Para encerrar a execucao digite o camando "exit"