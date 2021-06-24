#include<iostream>
using namespace std;
int main()
{
  int x,y,z;
  cin>>x>>y>>z;
  if(x<y)
  {
    if(x<z)
      cout<<"L1";
    else
      cout<<"L3";
  }
  else if(y<z)
    cout<<"L2";
  else
    cout<<"L3";
  return 0;
}
