#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int x,y,z;
  char str[100];
  cin>>x>>y>>z>>str;
  if(strcmp(str,"L1")== 0)
  {
    if(y<z)
      cout<<"L2";
    else 
      cout<<"L3";
  }
  else if(strcmp(str,"L2")== 0)
  {
    if(x<z)
      cout<<"L1";
    else 
      cout<<"L3";
  }
  else if(strcmp(str,"L3")== 0)
  {
    if(x<y)
      cout<<"L1";
    else 
      cout<<"L2";
  }
  
}
