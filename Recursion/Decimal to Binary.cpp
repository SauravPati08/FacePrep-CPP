#include <bits/stdc++.h>
using namespace std;
 
int find(int decimalNumber)
{
    if (decimalNumber == 0)
        return 0;
    else
        return (decimalNumber % 2 + 10 *
                find(decimalNumber / 2));
}
 
int main()
{
    int decimalNumber;
  	cin>> decimalNumber;
    cout << find(decimalNumber);
    return 0;
}
