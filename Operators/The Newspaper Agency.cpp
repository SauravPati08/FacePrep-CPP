#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b,c,profit;
  scanf("%d%d%d",&a,&b,&c);
  profit = (a*(b-c))-100;
  printf("%d",profit);
}
