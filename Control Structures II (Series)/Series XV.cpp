#include<iostream>
using namespace std;
int main()
{
  int n,a1=3,a2=8,a;
  cin>>n;
  for(int i=0;i<n;i++){
    if(i==0) cout<<a1<<" ";
    else if(i==1) cout<<a2<<" ";
    else{
      a=a1+a2+i;
      cout<<a<<" ";
      a1=a2;
      a2=a;
    }
    
  }
}
