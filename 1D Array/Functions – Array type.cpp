#include<iostream>
using namespace std;
int main()
{
  int n,i,c=0;
  cin>>n;
  int a[n];
  cout<<"Enter the number of elements in the array\nEnter the elements in the array";
  cout<<"\nThe array is ";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]%2==0)
      c++;
  }
  if(c==n)
    cout<<"Even";
  else if(c==0)
    cout<<"Odd";
  else
    cout<<"Mixed";
}
