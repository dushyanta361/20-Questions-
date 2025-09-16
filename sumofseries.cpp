//Sum Of Series By Dushyanta Madhab Baruah
#include <iostream>
using namespace std;

int main (){
    int n;
    double sum = 0.0;
    cout<< " enter the value of n: ";
    cin>> n ;
    
    for (int i = 1; i <=n; i++) {
        sum += 1.0 / i; 
     }
     
     cout << "sum of the series S = 1 + 1/2 + 1/3 + ... + 1/" << n << " is: " <<sum << endl;
     return 0;
 }
     

