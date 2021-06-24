#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 char a[10];
 int b;
 cin>>a>>b;
 if(strcmp(a,"front")==0 || strcmp(a,"FRONT")==0)
    {
      if(b==1)
        cout<<"Left Handed";
      else
        cout<<"Right Handed";
    }
 else if(strcmp(a,"REAR")==0 || strcmp(a,"rear")==0)
  {
    if(b==1)
  	 cout<<"Right Handed";
    else
     cout<<"Left Handed";
  }
}
