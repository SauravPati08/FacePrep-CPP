  
#include<iostream>
using namespace std;
int main()
{
  int r,c,i,j;
  cin>>r>>c;
  int a[r][c];
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      cin>>a[i][j];
  for(i = 0; i < c; i++)
	{
	int max = a[0][i];
	for(j = 1; j < r; j++)
		{
		if(a[j][i] > max)
			max = a[j][i];
		}
	cout<<max<<"\n";
	}
}
