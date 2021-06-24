#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,m=4;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<m<<" ";
    m=m+pow(i,2);
  }
}
