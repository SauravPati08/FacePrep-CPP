#include<iostream>
using namespace std;
int main()
{
  int x,y,z,n,c=0;
  cin>>x>>y>>z>>n;
  if(x>=n)
    c++;
  if(y>=n)
    c++;
  if(z>=n)
    c++;
  if(c==0)
    cout<<c;
  else
    cout<<c;
}
