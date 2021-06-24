#include<iostream>
using namespace std;
int main()
{
 int a,b,c,n;
  cin>>a>>b>>c>>n;
  if(a%n==0)
    cout<<"Car 1 goes into road A";
  else if(b%n==0)
    cout<<"Car 1 goes into road B";
  else if(c%n==0)
    cout<<"Car 1 goes into road C";
  else
    cout<<"No path exist";
}
