#include<iostream>    
using namespace std;  
int n, m;  
int a[100];  
int main()  
{  
    cin>>n>>m;  
    int i, j=0, ans=0;  
    for(i=0;i<n;i++)  
    {  
      cin>>a[i];  
      if(j+a[i]>m)  
      {  
          ans++;  
          j=a[i];  
      }  
      else  
          j+=a[i];  
    }  
    if(j)
     ans++;  
    cout<<ans<<endl;  
    return 0;  
}  
