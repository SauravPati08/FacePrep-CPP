#include<iostream>
using namespace std;
int main()
{
  int n,a=5,c=1;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a+=11*c;
    c+=2;
  }
}
