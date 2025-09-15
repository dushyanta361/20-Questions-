
\\ This program is written by Dushyanta Madhab Baruah
#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x) {
    return x*x*x - x - 2;  
}

double fprime(double x) {
    return 3*x*x - 1;       
}

double newtonRaphson(double x0, double tol, int maxIter) {
    double x = x0;
    for (int i = 0; i < maxIter; i++) {
        double fx = f(x);
        double fpx = fprime(x);

        if (fabs(fpx) < 1e-12) {
            cout << "Derivative too small. Method fails.\n";
            return x;
        }

        double x1 = x - fx / fpx;

        if (fabs(x1 - x) < tol) {
            return x1;
        }
        x = x1;
    }
    cout << "Newton-Raphson did not converge within " << maxIter << " iterations.\n";
    return x;
}

double bisection(double a, double b, double tol, int maxIter) {
    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval: f(a) and f(b) must have opposite signs.\n";
        return NAN;
    }

    double c;
    for (int i = 0; i < maxIter; i++) {
        c = (a + b) / 2.0;

        if (fabs(f(c)) < tol || fabs(b - a) < tol) {
            return c;
        }

        if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    cout << "Bisection did not converge within " << maxIter << " iterations.\n";
    return c;
}

int main() {
    double a, b, x0, tol;
    int maxIter;

    cout << "Enter interval [a, b] for Bisection method: ";
    cin >> a >> b;

    cout << "Enter initial guess for Newton-Raphson method: ";
    cin >> x0;

    cout << "Enter tolerance: ";
    cin >> tol;

    cout << "Enter maximum iterations: ";
    cin >> maxIter;

    cout << fixed << setprecision(6);

    double root_bisect = bisection(a, b, tol, maxIter);
    if (!isnan(root_bisect)) {
        cout << "Root (Bisection): " << root_bisect << endl;
    }

    double root_newton = newtonRaphson(x0, tol, maxIter);
    cout << "Root (Newton-Raphson): " << root_newton << endl;

    return 0;
}
