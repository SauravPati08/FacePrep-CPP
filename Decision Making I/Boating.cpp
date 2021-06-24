#include<iostream>
using namespace std;
int main()
{
  int w,a,c;
    cin>>w>>a>>c;
    {
       if(((a*75)+(c*30))<w)
       {
        cout<<"Boat is stable";
       }
       else
       {
        cout<<"Boat will sink";
       }
    }
}
