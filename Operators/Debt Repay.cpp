#include<stdio.h>
#include<stdlib.h>
int main()
{
  int p, r, t;
  float i, a, d, f;
  scanf("%d%d%d",&p,&r,&t);
  i = (float)p*r*t/100;
  a = (float)p+i;
  d = (float)i*2/100;
  f = (float)a-d;
  printf("%.2f\n%.2f\n%.2f\n%.2f", i, a, d, f);
}
