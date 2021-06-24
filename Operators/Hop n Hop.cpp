#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int x, y, distance;
  cin>>x>>y;
  distance = sqrt(pow(y-4,2) + pow(x-3,2));
  cout<<distance;
}
