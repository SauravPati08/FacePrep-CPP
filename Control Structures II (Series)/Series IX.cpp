#include<iostream>
using namespace std;
int main()
{
  int n,a=2,b=13;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a=a+b*i;
  }
}
