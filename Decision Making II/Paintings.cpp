#include<iostream>
using namespace std;
int main()
{
  int l, b, l1, b1, l2, b2, a, a1, a2;
  cin>>l>>b>>l1>>b1>>l2>>b2;
  a = l*b;
  a1 = l1*b1;
  a2 = l2*b2;
  if(a>a1+a2)
    cout<<"Leonardo can fix both painting";
  else
    cout<<"Leonardo cannot fix both painting";
    
}
