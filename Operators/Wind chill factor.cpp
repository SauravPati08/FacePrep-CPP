#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int t, v;
  float WCF;
  cin>>t>>v;
  WCF =(float) 35.74 + 0.6215*t + ((0.4275*t - 35.75) * pow (v,0.16));
  cout<<WCF;
}
