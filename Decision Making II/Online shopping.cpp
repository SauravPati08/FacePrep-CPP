#include<iostream>
using namespace std;
int main()
{
  float f1,f2,f3,s1,s2,s3,a1,a2,a3,f,s,a;
  cin>>f1>>f2>>f3>>s1>>s2>>s3>>a1>>a2>>a3;
  f=(f1*((100-f2)/100.0))+f3;
  s=(s1*((100-s2)/100.0))+s3;
  a=(a1*((100-a2)/100.0))+a3;
  cout<<"In Flipkart Rs."<<f<<endl;
  cout<<"In Snapdeal Rs."<<s<<endl;
  cout<<"In Amazon Rs."<<a<<endl;
  if(f<=s){
  	if(f<=a)
      cout<<"He will prefer Flipkart";
    else
      cout<<"He will prefer Amazon";
   }
  else
    cout<<"He will prefer Snapdeal";
  return 0;
}
