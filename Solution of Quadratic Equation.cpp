//This program is written by Dushyanta Madhab Baruah
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation (a must not be 0)." << endl;
        return 0;
    }

    double discriminant = b*b - 4*a*c;
    cout << fixed << setprecision(4);

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and distinct:" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } 
    else if (discriminant == 0) {
        double root = -b / (2*a);
        cout << "Roots are real and equal:" << endl;
        cout << "Root = " << root << endl;
    } 
    else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex and distinct:" << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
