#include<iostream>
using namespace std;
int main()
{
  int r,x,d;
  cin>>r>>x;
  d = 2*r;
  if(x>=d)
    cout<<"Circle can be inside a square";
  else
    cout<<"Circle cannot be inside a square";
}
