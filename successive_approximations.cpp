#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

double fingRoot ( double (*f) ( double ), double x0, int n ) {
    double x = x0;

    for ( int k = 1; k <= n; k++ ) {
        x = f(x);
    }
    
    return x;
}


double f ( double x ) {
    return 0.5*cos(x);
}

double g ( double x ) {
    return exp(-x);
}

double h ( double x ) {
    return (x*x+6)/5;
}


void test ( double (*f) ( double ), double x0, string eq) {

    std::cout << "Решение уравнения " << eq << ":\t";
    double z = findRoot (f, x0, int n);
    std::cout << z << std::endl;

    std::cout << "Проверка найденного решения:\t";
    std::cout << x << " = " << f(z) << std::endl;
    for ( int k = 1; k <= 50; k++ ) {
        std::cout << "-";
    }

    std::cout << std::endl;
}



int main  () {

    system ( "chcp 1251 > nul" );

    test ( f, 0, "x = 0.5 cos(x)");
    test ( g, 0, "x = exp(-x)");
    test ( h, 1, "x = (x*x+6)/5");

    system ( "pause > nul" );

    return 0;
    
}

// HOLY FUCK MIYO
