#include<iostream>
using namespace std;
int main()
{
  float n,htime;
  cin>>n>>htime;
  if(n==1)
  	cout<<htime;
  else if(n==2)
  	cout<<(htime+(htime*0.5));
  else if(n==3)
  	cout<<htime*2;
  else if(n>3)
    cout<<"Number of items is more";
  
}
