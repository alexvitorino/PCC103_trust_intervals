#include <cmath>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>
#include <gsl/gsl_sf_hyperg.h> //https://github.com/microsoft/GSL.git
# define MY_PI 3.141592653589793


double t_distribution_pdf(double x, int v) {

    return ((tgamma((v + 1) * 0.5)) / (sqrt(v * MY_PI) * tgamma(v * 0.5))) * pow((1 + (pow(x, 2) / v)), (-(v + 1) * 0.5));
}

double t_distribution_cdf(double x, int v) {
    return 0.5 + (x * (tgamma((v + 1) / 2)) * (gsl_sf_hyperg_2F1(0.5, (v + 1) * 0.5, 1.5, -(pow(x, 2)) / v)) / (sqrt(v * MY_PI) * tgamma(v / 2)));
}

double t_distribution_cdf2(double x1, double x2, int v) {
    double cdf_x1 = t_distribution_cdf(x1, v);
    double cdf_x2 = t_distribution_cdf(x2, v);

    return std::abs(cdf_x1 - cdf_x2);
}