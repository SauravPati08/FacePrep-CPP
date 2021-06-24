#include<iostream>
using namespace std;
int main()
{
  int num, firstNumber, lastNumber, add;
  cin>>num;
  lastNumber = num%10;
  while(num>=10)
  {
    num = num/10;
  }
  firstNumber = num;
  add = firstNumber+lastNumber;
  cout<<add;
  return 0;
}
