#include<iostream>
using namespace std;
int main()
{
  int a[10][10], n, i, j, flag=1;
  cin>>n;
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      cin>>a[i][j];
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      if(i==j)
      {
        if(a[i][j]==0)
          flag = 0;
      }
      else
      {
        if(a[i][j]!=0)
          flag =0;
      }
    }
  }
  if(flag==1)
    cout<<"Yes";
  else
    cout<<"No";
      
}
