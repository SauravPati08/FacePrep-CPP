#include<iostream>
using namespace std;
int main()
{
  int m,r,d,t,n;
  cin>>m>>r>>d;
  if(m ==4 || m==5 ||m==11 || m==12)
  {
    n = r*20/100;
    r = r+n;
    t = r*d;
    cout<<t;
  }
  else if(m==1||m==2||m==3||m==6||m==7||m==8||m==9||m==10)
  {
    t = r*d;
    cout<<t;
  }
  else if(m>12)
  {
    cout<<"Invalid Input";
  }

  
}
