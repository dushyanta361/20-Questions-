//This program is written by Dushyanta Madhab Baruah
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x) {
    return x*x*x;  
}

double simpson13(double a, double b, int n) {
    if (n % 2 != 0) {
        cout << "Number of intervals (n) must be even.\n";
        return NAN;
    }

    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i += 2) {
        sum += 4 * f(a + i * h);
    }

    for (int i = 2; i < n; i += 2) {
        sum += 2 * f(a + i * h);
    }

    return (h / 3) * sum;
}

int main() {
    double a, b;
    int n;

    cout << "Enter lower limit a: ";
    cin >> a;
    cout << "Enter upper limit b: ";
    cin >> b;
    cout << "Enter number of intervals (even n): ";
    cin >> n;

    cout << fixed << setprecision(6);

    double result = simpson13(a, b, n);
    if (!isnan(result)) {
        cout << "Approximate integral = " << result << endl;
    }

    return 0;
}

