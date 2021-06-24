#include<iostream>
using namespace std;
int main()
{
  int n, sum=0;
  cin>>n;
  for (int i=1; i<n; i++)
  {
    if(n%i==0)
      sum=sum+i;
  }
    if(sum>n)
      cout<<"Abundant Number";
    else
      cout<<"Not Abundant Number";
}
