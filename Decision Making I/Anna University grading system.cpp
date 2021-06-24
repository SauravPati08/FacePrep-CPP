#include<iostream>
using namespace std;
int main()
{
  int marks;
  cin>>marks;
  if(marks>100)
    cout<<"Invalid Input";
  else if(marks==100)
    cout<<"S";
  else if(marks>=90&&marks<=99)
    cout<<"A";
  else if(marks>=80&&marks<=89)
    cout<<"B";
  else if(marks>=70&&marks<=79)
    cout<<"C";
  else if(marks>=60&&marks<=69)
    cout<<"D";
  else if(marks>=50&&marks<=59)
    cout<<"E";  
  else if(marks<50)
    cout<<"F";
  return 0;
}
