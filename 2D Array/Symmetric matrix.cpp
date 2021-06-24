#include<iostream>
using namespace std;
int main()
{
  int m, n, i, j, mat[50][50], trans[50][50];
  cin>>m>>n;
  for(i=0; i<m; i++)
    for(j=0; j<n; j++)
      cin>>mat[i][j];
  for(i=0; i<m; i++)
    for(j=0; j<n; j++)
      trans[j][i]=mat[i][j];
  if(m==n)
  {
    for(i=0; i<m; i++)
    {
      for(j=0; j<m; j++)
      {
        if(mat[i][j]!=trans[i][j])
          break;
      }
      if(j!=m)
        break;
    }
    if(i==m)
      cout<<"Symmetric";
    else
      cout<<"Not Symmetric";
  }
  else
    cout<<"Not Symmetric";
}
