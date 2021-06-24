#include<iostream>
using namespace std;
int main()
{
  int n,a=9,b1=2,b2=9,b;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<a<<" ";
    if(i==1)a+=b1;
    else if(i==2)a+=b2;
    else {
      b=b1+b2;
      a+=b;
      b1=b2;
      b2=b;
    }
  }
}
