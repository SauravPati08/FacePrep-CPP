#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int a,b,m,n,temp,i;
  cin>>a>>b;
  for(i=a;i<=b;i++)
  {
   	m=i%10;
    n=i/10;
    temp = m+n + m*n;
    if(temp == i)
      cout<<i<<endl;
  }
}
