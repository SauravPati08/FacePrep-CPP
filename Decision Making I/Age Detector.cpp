#include<iostream>
using namespace std;
int main()
{
  int bYear,cYear;
  cin>>bYear>>cYear;
  if(bYear>cYear)
    cout<<cYear+100-bYear;
  else
    cout<<cYear-bYear;
  return 0;
}
