#include<iostream>
using namespace std;
int main()
{
  int a,b,c,d,e;
  float totalCost;
  cin>>a>>b>>c>>d>>e;
  totalCost = (float)(a*350.34)+(b*230.90)+(c*190.55)+(d*125.30)+(e*180.90);
  if(totalCost<=15000)
    cout<<"Yes";
  else
    cout<<"No";
  
}
