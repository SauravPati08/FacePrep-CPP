#include<iostream>
using namespace std;
int main()
{
  int a, b, c, d, e, f;
  cin>>a>>b>>c;
  d = a*b/100;
  e = (a-d)*c/100;
  f = (a-d-e)/3;
  cout<<d<<endl<<e<<endl<<f;
  return 0;
}
