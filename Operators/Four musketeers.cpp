#include<iostream>
using namespace std;
int main()
{
  int a1, a2, b1, b2, c1, c2;
  float x, y;
  cin>>a1>>a2>>b1>>b2>>c1>>c2;
  x = (float) (a1+b1+c1)/3;
  y = (float) (a2+b2+c2)/3;
  cout<<x<<endl<<y;
  return 0;
}
