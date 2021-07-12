#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>

double normal_distribution_cdf1(double x, double mu, double std_dev) {
    return (0.5) * (1 + erf((x - mu) / (std_dev * sqrt(2))));
}

double normal_distribution_cdf2(double x) {
    return (0.5) * (1 + erf((x) / sqrt(2)));
}

double normal_distribution_cdf3(double x1, double x2, double mu, double std_dev) {
    double cdf_x1 = normal_distribution_cdf1(x1, mu, std_dev);
    double cdf_x2 = normal_distribution_cdf1(x2, mu, std_dev);

    return std::abs(cdf_x1 - cdf_x2);
}

double normal_distribution_cdf4(double x1, double x2) {
    double cdf_x1 = normal_distribution_cdf2(x1);
    double cdf_x2 = normal_distribution_cdf2(x2);

    return std::abs(cdf_x1 - cdf_x2);
}