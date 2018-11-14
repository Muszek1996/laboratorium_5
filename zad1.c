#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include <unistd.h>
#include <math.h>

#include "include/pomiar_czasu.h"

#define M_PI 3.14159265358979323846


double f(double x){
    return sin(x);
}


double integral(double a, double b, int N) {
    double x1 = a;
    double c = 0.0;
    double dx = (b - a) / N;

    double fx1 = f(x1);

    for (int i = 0; i < N; i++) {


        double x2 = x1 + dx;
        double fx2 = f(x2);
        c += (fx1 + fx2);
        fx1= fx2;
        x1 = x2;
    }
    c*= dx*0.5;

    printf("Wynik całki dla N:%d, dx:%f, wynik: %f\n",N,dx,c);
}



int main( int argc, char *argv[] ){

    inicjuj_czas();
    integral(0,M_PI,1000000);
    drukuj_czas();
}

