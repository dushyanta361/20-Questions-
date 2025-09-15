// Solution of two linar equation by Dushyanta Madhab Baruah
// let the equations be- a1x + b1y = c1 & a2x + b2y = c2
#include<iostream>
using namespace std;
int main()
{
double a1, b1, c1, a2, b2, c2, x, y;
cout<<"Enter the coefficient of first equation (a1,b1,c1):";
cin>>a1>>b1>>c1;
cout<<"Enter the coefficient of second equation (a2,b2,c2):";
cin>>a2>>b2>>c2;
double D= a1*b2 - a2*b1;
if (D==0)
{
cout<<"The syatem has no unique solution (either infinite or no solution)."<<endl;
}
else 
{
double Dx = c1*b2 - c2*b1;
double Dy = a1*c2 - a2*c1;
double x = Dx/D;
double y = Dy/D;
cout<<"Solutions: x="<<x<<", y ="<<y<<endl;
}
return 0;
}

