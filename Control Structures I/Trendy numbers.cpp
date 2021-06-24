#include<iostream>
using namespace std;
int main()
{
  int n,count=0,m,a,b;
  cin>>n;
  a=n;
  while(n>0)
  {
    m=n%10;
    n=n/10;
    count++;
  }
  if(count==3)
  {
    while(a>10)
    {
      b=a%10;
      a=a/10;
    }
    if(b%3==0)
      cout<<"Trendy Number";
    else
      cout<<"Not a Trendy Number";
  }
  else
    cout<<"Invalid Number";
}
