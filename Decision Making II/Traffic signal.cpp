#include<iostream>
using namespace std;
int main()
{
  float s,l,t,a;
  cin>>s>>l>>t;
  a = l*t;
  cout.precision(2);
  if(s>=a)
    cout<<"Yes";
  else
    cout<<"No";
}
