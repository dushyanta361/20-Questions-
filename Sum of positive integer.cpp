//This program is written by Dushyanta Madhab Baruah 
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    int temp = num;
    while (temp > 0) {
        sum += temp % 10; 
        temp /= 10;       
    }

    cout << "Sum of digits of " << num << " = " << sum << endl;

    return 0;
}
