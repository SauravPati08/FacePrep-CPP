#include<iostream>
using namespace std;
int main()
{
  int so=0,se=0,n,i;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]%2==0)
      se+=a[i];
    else
      so+=a[i];
  }
  cout<<"The sum of the even numbers in the array is "<<se<<"\n";
  cout<<"The sum of the odd numbers in the array is "<<so;
  
}
