#include<iostream>
using namespace std;
int main()
{int n,a=2,i=1;
 cin>>n;
 do
 {
   cout<<a<<" ";
   a=a*a-1;
   i++;
 } while(i<=n);
}
