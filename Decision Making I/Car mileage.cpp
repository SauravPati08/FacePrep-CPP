#include<iostream>
using namespace std;
int main()
{
  float m;
  int l,d,D;
  cin>>m>>l>>d;
  D = (int)m*l;
  if(D>=d)
    cout<<"Can reach";
  else
    cout<<"Cannot reach";
  return 0;
}
