#include<iostream>
using namespace std;
int main()
{
  int a,b,sum1=0,sum2=0;
  cin>>a>>b;
  for (int i=1; i<a; i++)
  {
    if(a%i==0)
      sum1=sum1+i;
  }
  
  for (int i=1; i<b; i++)
  {
    if(b%i==0)
      sum2=sum2+i;
  }
  
  if((sum1/a)==(sum2)/b)
    cout<<"Friendly Pair";
  else
    cout<<"Not Friendly Pair";
   
}
