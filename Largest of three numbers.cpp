//This program is written by Dushyanta Madhab Baruah
#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    double largest;

    if (a >= b && a >= c) {
        largest = a;
    } 
    else if (b >= a && b >= c) {
        largest = b;
    } 
    else {
        largest = c;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
