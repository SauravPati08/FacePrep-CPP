#include<iostream>
#include <cstdio>
using namespace std;
void convert10tob(int N, int b)
{
     if (N == 0)
        return;
     int x = N % b;
     N /= b;
     if (x < 0)
        N += 1; 
     convert10tob(N, b);
  	
     cout<< x < 0 ? x + (b * -1) : x;
     return;
}
 
int main()
{
    int n,b;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
  	cout<<"Enter the base to which you want to convert"<<endl;
    cin>>b;
    if (n != 0)
    {
      cout<<"The number in base "<<b<<" is ";
        convert10tob(n, b);
        
    }
    else
        cout<<"0"<<endl;
    return 0;
}
