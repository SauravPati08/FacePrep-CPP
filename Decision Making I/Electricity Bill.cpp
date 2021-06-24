#include<iostream>
using namespace std;
int main()
{
  int u,c;
  cin>>u;
  if(u<=200)
  {
    c=0.5*u;
    cout<<"Rs."<<c;
  }
  else if(u>200 && u<=400)
  {
    c=0.65*u+100;
    cout<<"Rs."<<c;
  }
  else if(u>400 && u<=600)
  {
    c=0.8*u+200;
    cout<<"Rs."<<c;
  }
  else if(u>600)
  {
    c=1.25*u+425;
    cout<<"Rs."<<c;
  }  
}
