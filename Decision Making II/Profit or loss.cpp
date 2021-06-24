#include<iostream>
using namespace std;
int main()
{
  int x,y,t;
  cin>>x>>y;
  t=y*12;
  if(t>x)
    cout<<"Profit : Rs."<<t-x;
  else if(t<x)
    cout<<"Loss : Rs."<<x-t;
  else
    cout<<"No profit nor loss";
  return 0;
}
