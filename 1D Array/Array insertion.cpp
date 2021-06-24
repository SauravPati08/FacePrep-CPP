#include<iostream>
using namespace std;
int main()
{
  int n,loc,val,i,temp;
  cin>>n;
  int a[n+1];
  for(i=0;i<n;i++)
    cin>>a[i];
 cout<<"Enter the number of elements in the array\nEnter the elements in the array\nEnter the location where you wish to insert an element\n";
  cin>>loc>>val;
if(loc>n || loc<=0)
{
   std::cout<<"Invalid Input";
  exit(0);
}
  cout<<"Enter the value to insert\n";
 for(int i=n-1; i>=loc-1; i--)
     a[i+1] = a[i];
 a[loc-1] = val;
  cout<<"Array after insertion is\n";
 for(int i=0; i<=n; i++)
     cout<<a[i]<<"\n";
}
