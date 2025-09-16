// Temperatue Conversion by Dushyanta Madhab Baruah
#include<iostream>
using namespace std;
int main()
{
   double temp, converted;
   int choice;
   cout<<"1. Celsius to Fahrenheit\n";
   cout<<"2. Fahrenheit to Celsius\n";
   cout<<"Enter your choice:";
   cin>> choice;
   if (choice==1) 
   {
   	cout<<"Enter temperature in Celsius:";
   	cin>> temp;
   	converted= (temp*9.0/5.0)+ 32.0;
   	cout<<temp<<"C="<<converted<<"F"<< endl;
   }
   else if ( choice==2)
   {
   	cout<<"Enter temerature in Fahrenheit:";
   	cin>> temp;
   	converted= (temp-32.0)*5.0/9.0;
   	cout<<temp<<"F="<<converted<<"C"<<endl;
   }
   else {
   	cout<<"Invalid choice!"<<endl;
   }
   return 0;
}
