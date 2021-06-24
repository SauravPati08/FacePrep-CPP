#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  float a=95.0,b=20.5;
  for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a+=b;
    b+=2;
  }
}
