// Checking of prime number by Dushyanta Madhab Baruah
#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isPrime(num))
        std::cout << num << " is a prime number.\n";
    else
        std::cout << num << " is not a prime number.\n";
    return 0;
}
