#include<iostream>
using namespace std;
int main()
{
  int n;
  float p=0.5;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<p<<" ";
    p*=3;
  }
}
