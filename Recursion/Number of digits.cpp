#include <bits/stdc++.h>
using namespace std;
int NumberOfDigits(int n)
{
    if (n/10 == 0)
        return 1;
    return 1 + NumberOfDigits(n / 10);
}

int main()
{
    int n;
  	cout<<"Enter the value of n"<<endl;
  	cin>>n;
    cout<<"The number of digits in "<<n<<" is "<<NumberOfDigits(n);
    return 0;
}
