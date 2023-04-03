#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++)
    {
    cin>>a[i];
    }
    //int j=0;
    for (i=1;i<n;i++)
    {
        if(a[i]!=0)
        {
            if(a[j]==0)
            {
             swap(a[j],a[i]);
            }
           j++; 
        }
        else
        {
            if(a[j]!=0)
            {
                j++;
            }
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<< a[i];
    }

    return 0;
}