#include<iostream>
#include<cmath>
#define pi 3.14
using namespace std;
int main()
{
  int r,h,v,a,x;
  cin>>r>>h>>a>>x;
  v=pi*pow(r,2)*h;
  if(v<(a*x))
    cout<<"The tank can be filled within "<<x<<" hours";
  else
    cout<<"The tank cannot be filled within "<<x<<" hours";
}
