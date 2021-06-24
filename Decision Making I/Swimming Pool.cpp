#include<iostream>
using namespace std;
int main()
{
  int s;
    float l;
    cin>>s>>l;
    int v=s*s*s;
    if(v<=(l/1000))
    {
        cout<<"Cannot store";
    }
    else
    {
        cout<<"Can store";
    }
    return 0;
}
