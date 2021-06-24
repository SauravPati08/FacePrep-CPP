#include<iostream>
using namespace std;
int main()
{
  int n, i, j, mat[50][50], trans[50][50];
  cin>>n;
  
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      cin>>mat[i][j];
  
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
      cout<<mat[i][j]<<" ";
    cout<<endl;
  }
    
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      trans[j][i]=mat[i][j];
  
  cout<<"Transpose matrix is:"<<endl;
  
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
      cout<<trans[i][j]<<" ";
    cout<<endl;
  }
}
