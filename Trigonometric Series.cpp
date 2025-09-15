// This program is written by Dushyanta Madhab Baruah
#include <iostream>
#include <cmath>
using namespace std;

double sineSeries(double x_deg, int n) {
    double x = x_deg * M_PI / 180.0; // Convert degrees to radians
    double term = x; // First term
    double sum = x;
    for (int i = 1; i < n; ++i) {
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
    }
    return sum;
}

void printFibonacci(int n) {
    int a = 0, b = 1;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    double x;
    cout << "Enter the angle x (in degrees): ";
    cin >> x;
    cout << "Enter the number of terms n: ";
    cin >> n;

    double sineSum = sineSeries(x, n);
    cout << "Sum of sine series for sin(" << x << ") up to " << n << " terms is: " << sineSum << endl;

    printFibonacci(n);

    return 0;
}
