#include<iostream>
using namespace std;
int main()
{
  int n,i,j,flag1=1,flag2=0;
  cin>>n;
  int a[n][n];
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)
      cin>>a[i][j];
  }
  for(i=1;i<n;i++){
    for(j=0;j<i;j++){
      if(a[i][j] ==0) 
        flag1=0;
      else 
        flag2=1;
    }
  }
  if(flag1==0 && flag2==0) 
    cout<<"Upper Triangular Matrix";
  else 
    cout<<"Not an Upper Triangular Matrix";
}
