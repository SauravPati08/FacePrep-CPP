#include<iostream>
using namespace std;
int main()
{
  int a[100][100], n, i, j, count=0;
  cin>>n;
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      cin>>a[i][j];
      if(a[i][j]%2==0)
        count++;
    }
  } 
   if(count==n*n||count==0)
     cout<<"Yes";
  else
    cout<<"No";
}
