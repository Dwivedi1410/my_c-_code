#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0,k=1,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=2;i<n;i++)
   {
        if(j!=0)
        {
           if(a[j]>a[i])
           {
            swap(a[j],a[i]);
            j++;
           if(a[k]!=a[i])
           {
            if(a[k]>a[i])
            {
                swap(a[k],a[i]);
            }
             k++;
            }
           }
        
          else if(a[k]!=a[i])
           {
            if(a[k]>a[i])
            {
                swap(a[k],a[i]);
            }
             k++;
           }
        }
        else
        {
            j++;
            k++;
        }
   }
        
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
 
}