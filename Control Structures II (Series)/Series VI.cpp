#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,pr;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        pr=0;
       if(i%2==0)
        {
            pr=pow(i,2)-2;
            cout<<pr<<" ";
        }
        else
        {
            pr=pow(i,2)-1;
            cout<<pr<<" ";
        }
    }
}
