#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int a[20], n, i, j, min, max;
  cout<<"Enter the number of elements in the array"<<endl;
  cin>>n;
  cout<<"Enter the elements in the array"<<endl;
  for(i=0;i<n;i++)
    cin>>a[i];
  min = a[0];
  max = a[0];
  for(i=0;i<n;i++)
  {
   	if(max<a[i])
      max = a[i];
    if(min>a[i])
      min = a[i];
  }
  
  cout<<"The range of the array is "<<max-min;
}
