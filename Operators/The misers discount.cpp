#include<iostream>
using namespace std;
int main()
{
  float i1, i2, t, s, d;
  int a;
  cin>>i1>>i2>>a;
  t = i1+i2;
  s = (float) t*a/100;
  d = t-s;
  cout<<t<<endl<<d<<endl<<s;
  return 0;
}
