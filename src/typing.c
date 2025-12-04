#include <stdio.h>
#include "../include/ode_solver.h"

// Differential equation: dy/dx = a*y + b*x + c
double f(double x, double y, double a, double b, double c)
{
    return (a*y + b*x + c);
}

// Euler's Method implementation
void euler_method(double a, double b, double c,
                  double x0, double y0,
                  double xn, double h)
{
    int n = (int)((xn - x0) / h);

    printf("\nStep\tX\t\tY\n");

    for(int i = 1; i <= n; i++)
    {
        y0 = y0 + h * f(x0, y0, a, b, c);
        x0 = x0 + h;

        printf("%d\t%.4lf\t%.6lf\n", i, x0, y0);
    }
}
