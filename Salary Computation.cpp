//This program is written by Dushyanta Madhab Baruah
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double basic, hra, da, allowances, total;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter HRA (House Rent Allowance): ";
    cin >> hra;

    cout << "Enter DA (Dearness Allowance): ";
    cin >> da;

    cout << "Enter Other Allowances: ";
    cin >> allowances;

    // Total salary calculation
    total = basic + hra + da + allowances;

    cout << fixed << setprecision(2);
    cout << "\n----- Salary Details -----\n";
    cout << "Basic Salary      : " << basic << endl;
    cout << "HRA               : " << hra << endl;
    cout << "DA                : " << da << endl;
    cout << "Other Allowances  : " << allowances << endl;
    cout << "-----------------------------\n";
    cout << "Total Salary      : " << total << endl;

    return 0;
}
