//This program is written by Dushyanta Madhab Baruah 
#include <iostream>
using namespace std;

long long factorialRecursion(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursion(n - 1);
}

long long factorialLoop(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << n << " using loop = " << factorialLoop(n) << endl;
        cout << "Factorial of " << n << " using recursion = " << factorialRecursion(n) << endl;
    }

    return 0;
}
