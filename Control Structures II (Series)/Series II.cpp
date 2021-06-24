#include <iostream>
using namespace std;

int main() 
{
  int n ,m = 6;
  cin>>n;
  for(int i=1; i<=n; i++)
  {
    cout<<m<<" ";
    m = m + i*5;
  }
}
