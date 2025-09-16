// Calculation of simple and compound interest By Dushyanta Madhab Baruah
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  double principal, rate, time;
  double simpleInterest, compoundInterest;
  cout<<"Enter Principal Amount:";
  cin>>principal;
  cout<<"Enter Rate of Interest in (%):";
  cin>>rate;
  cout<<"Enter Time in (years):";
  cin>>time;
  simpleInterest= (principal*rate*time)/100.0;
  compoundInterest= principal* (pow((1+rate/100.0),time)-1);
  cout<<"\n-- Results--"<<endl;
  cout<<"\n Simple Interest="<<simpleInterest<<endl;
  cout<<"\n Compound Interest="<<compoundInterest<<endl;
  return 0;
 } 
