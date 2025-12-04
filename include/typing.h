#ifndef ODE_SOLVER_H
#define ODE_SOLVER_H

// Function to represent the ODE: dy/dx = a*y + b*x + c
double f(double x, double y, double a, double b, double c);

// Euler Method function
void euler_method(double a, double b, double c,
                  double x0, double y0,
                  double xn, double h);

#endif
