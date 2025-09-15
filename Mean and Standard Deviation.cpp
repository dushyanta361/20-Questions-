// Mean and Standard Deviation By Dushyanta Madhab Baruah
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<double> data(n);
    cout << "Enter " << n << " numbers:\n";
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
        sum += data[i];
    }

    double mean = sum / n;

    double variance = 0.0;
    for (int i = 0; i < n; ++i) {
        variance += pow(data[i] - mean, 2);
    }
    variance = variance / n;
    double stdDev = sqrt(variance);

    cout << "Mean = " << mean << endl;
    cout << "Standard Deviation = " << stdDev << endl;
    return 0;
}
