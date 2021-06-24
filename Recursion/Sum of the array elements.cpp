#include <iostream>
using namespace std;
int Sum(int a[], int n)
{
    if (n <= 0)
        return 0;
    return (Sum(a, n - 1) + a[n - 1]);
}

int main()
{
    int n, a[100];
  	cin>>n;
  	for(int i =0; i<n; i++)
      cin>>a[i];
    cout<<Sum(a, n);
    return 0;
}
