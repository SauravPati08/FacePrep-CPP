#include<iostream>
using namespace std;
int main ()
{
    int a[100], b[100], n, i, j, count=0;
    cin>>n;
    for (i=0; i < n; i++)
        cin>>a[i];    
    for (i=0; i < n; i++)
    {
        for (j = 0; j < count; j++)
        {
            if (a[i] == b[j])
                break;
        }
        if (j == count)
        {
            b[count] = a[i];
            count++;
        }
    }
	cout<<"There are "<<count<<" distinct element in the array.";
}
