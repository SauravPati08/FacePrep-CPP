#include<iostream>
using namespace std;
int main()
{
  int age;
  float st;
  cin>>age>>st;
  if(st>=12.00 && st< 18.00)
  {
    if(age>13)
      cout<<"$5.00";
    else
      cout<<"$2.00";
  }
  else
  {
     if(age>13)
      cout<<"$8.00";
    else
      cout<<"$4.00";
  }
}
