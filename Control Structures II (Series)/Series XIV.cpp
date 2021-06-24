#include<iostream>
using namespace std;
int main()
{
  int n,a=2,b=3;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a+=b;
    b*=2;
  }
}
