#include<iostream>
#include<cmath>;
using namespace std;
int main()
{
  int n,m=2,j=0;
  cin>>n;
  for(int i=0;i<n;i++){
    if(i%2 ==0){
      cout<<pow(3,j)<<" ";
      j++;
    }
    else{
      cout<<m<<" ";
      m*=3;
    }
  }
}
