#include<iostream>
using namespace std;
int main()
{
  int a1[100],a2[100];
  int n1,n2,sum1=0,sum2=0,i;
  cin>>n1>>n2;
  for(i=0; i<n1; i++)
  {
    cin>>a1[i];
    sum1=sum1+a1[i];
  }
  for(i=0; i<n2; i++)
  {
    cin>>a2[i];
    sum2=sum2+a2[i];
  }
  if(n1==n2 && sum1==sum2)
  {
    cout<<"Same";
  }
  else
  {
    cout<<"Not Same";
  }
 return 0;   
}
