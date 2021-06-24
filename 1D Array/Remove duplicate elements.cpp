#include<iostream>
using namespace std;
int main ()
{
    int a[100], b[100], n, i, j, k = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (a[i] == b[j])
                break;
        }
        if (j == k)
        {
            b[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < k; i++)
        cout << b[i] <<endl;
    return 0;
}
