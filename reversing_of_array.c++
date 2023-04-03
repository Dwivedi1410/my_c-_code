#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
    
        cin>>a[i];
    }
    int j=(n-1);
    for (int i=0;i<(n/2);i++)
    {
        int temp=a[i];

        while(j>=(n/2))
        {

            a[i]=a[j];
            a[j]=temp;
            break;
        }
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<< a[i];
    }

    return 0;
}