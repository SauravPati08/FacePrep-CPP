#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,p=11;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<pow(p,2)<<" ";
    p+=4;
  }
}
