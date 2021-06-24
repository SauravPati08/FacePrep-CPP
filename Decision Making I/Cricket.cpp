#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int tb,tr,rs,bb;
  cin>>tb>>tr>>rs>>bb;
  float crr,trr;
  crr = (float)(rs/((bb/6)+0.1*(bb%6)));
  trr = 6*float(tr)/tb;
  cout<<(tb/6)<<endl<<(bb/6)+0.1*(bb%6)<<endl;
  printf("%.1f\n",crr);
  printf("%.1f",trr);
  if(crr>trr)
    cout<<"\nEligible to Win";
  else
    cout<<"\nNot Eligible to Win";
 }
