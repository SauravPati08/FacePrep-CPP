#include<iostream>
using namespace std;
int main()
{
  int r,c,num,flag=0;
  cin>>r>>c>>num;
  if(num<=r || num<=(r*c) && num > r*(c-1)){
    cout<<"Yes";
    flag=1;
  }
  else{
    int tree=1;
    for(int i=1;i<c-1;i++){
      tree=tree+r;
      if(tree == num){
        cout<<"Yes";
        flag=1;
        break;
      }
    }
  }
  if(flag == 0)
    cout<<"No";
}
