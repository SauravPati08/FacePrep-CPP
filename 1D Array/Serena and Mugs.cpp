#include<iostream>
using namespace std;
int main()
{
  int n,v,i,sum=0;
  cin>>n>>v;
  int mugs[n];
  for(i=0;i<n;i++)
  {
    cin>>mugs[i];
    sum=sum+mugs[i];
  }
  if(sum<=v)
    cout<<"YES";
  else
    cout<<"NO";
}
