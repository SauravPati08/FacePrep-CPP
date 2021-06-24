#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int a[10], b[10], n1, n2, i, j, c=0;
  cin>>n1;
  for(i=0;i<n1;i++)
    cin>>a[i];
  cin>>n2;
  for(j=0;j<n2;j++)
    cin>>b[j];
  
  if(n1 == n2)
  {
    for(i=0;i<n1;i++)
    {
     	if(a[i] < b[i])
        {
         	c=1;
          	break;
        }
      	
    }
    if(c == 1)
    	cout<<"Incompatible";
  	else
    	cout<<"Compatible";
  }
  else
  	cout<<"Incompatible";
  
  
}
