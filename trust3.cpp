#include <cmath>
#include <iostream>
#include <math.h>
#include <vector>
#include <gsl/gsl_sf_hyperg.h>
#include "Normal_Distribuition3.h" //https://github.com/microsoft/GSL.git

int main()
{
    double interval, media;
    int p;

    std::vector<double> data = { 13.0,36.9,3.4,9.6,11.4,24.0,27.1,22.9,3.1,39.8,7.6,49.2,15.9,25.6 };

    std::cout << "Digite a probabilidade em porcentagem: " << std::endl;
    std::cin >> p;

    media = mean(data);

    MergeSort(data); // ordenacao do vetor de dados

    print_vector(data);

    interval = t_distribution_confidence_interval(data, p);

    if (interval == -1) {
        std::cout << "Nao foi possivel retornar um intervalo para essa probabilidade" << std::endl;
    }
    else {
        std::cout << "O intervalo de confianca em torno da media= " << media << " para uma probabilidade de " << p << "% eh de:" << std::endl;
        std::cout << "[" << media - interval << "," << media + interval << "]" << std::endl;
    }

}