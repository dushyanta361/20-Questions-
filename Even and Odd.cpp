//This program is written by Dushyanta Madhab Baruah
#include <iostream>
using namespace std;

int main() {
    int lower, upper;

    cout << "Enter lower limit: ";
    cin >> lower;
    cout << "Enter upper limit: ";
    cin >> upper;

    cout << "\nEven numbers between " << lower << " and " << upper << ":\n";
    for (int i = lower; i <= upper; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }

    cout << "\n\nOdd numbers between " << lower << " and " << upper << ":\n";
    for (int i = lower; i <= upper; i++) {
        if (i % 2 != 0)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}
