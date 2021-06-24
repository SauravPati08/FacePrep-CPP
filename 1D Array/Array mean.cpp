#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int a[20], i, n, m=0, avg;
  cout<<"Enter the number of elements in the array"<<endl;
  cin>>n;
  cout<<"Enter the elements in the array"<<endl;
  for(i=0;i<n;i++)
    cin>>a[i];
  
  for(i=0;i<n;i++)
  	m = m + a[i];
  
  cout<<"The mean of the array is "<<m/n;
}
