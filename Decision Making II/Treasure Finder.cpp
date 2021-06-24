#include<iostream>
using namespace std;
int main()
{
  int a,b,c,max;
  cin>>a>>b>>c;
  if((a<b && a>c) || (a>b && a<c))
    max=a;
  else if((b<a && b>c) || (b>a && b<c))
    max=b;
  else
    max=c;
  int i;
  if(max<a)
	i=a;
  else if(max<b)
	i=b;
  else
 	i=c;
  while(i!=0)
{
	if(a%i==0 && b%i==0 && c%i==0)
		 break;
	 i--;
  }

cout<<"The treasure is in box which has number "<<max<<endl;
cout<<"The code to open the box is "<<i;
}
