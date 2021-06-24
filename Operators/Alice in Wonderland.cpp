#include<iostream>
using namespace std;
int main()
{
  int num, sum = 0 , m;
  cin>>num;
  while(num>0)
  {
    m = num%10;
    sum = sum + m;
    num = num/10;
  }
  cout<<"Alice must go in path-"<<sum;
}
