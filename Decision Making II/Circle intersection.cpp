#include<iostream>
#include<cmath>
using namespace std;
int circle(int x1, int y1, int r1, int x2, int y2, int r2)
{
  int dist_center, sum_rad;
  dist_center = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  sum_rad = r1+r2;
  if(dist_center == sum_rad)
    return 1;
  else if(dist_center < sum_rad)
    return -1;
  else
    return 0;
}
int main()
{
  int x1,y1,r1,x2,y2,r2,a;
  cin>>x1>>y1>>r1>>x2>>y2>>r2;
  a = circle(x1,y1,r1,x2,y2,r2);
  if(a == 1)
    cout<<"Tangential";
  else if(a == -1)
    cout<<"Overlap";
  else
    cout<<"Do not Overlap";
}
