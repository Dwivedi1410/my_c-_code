#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int a[x],b[y],c[x+y];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }  
    for(int i=0;i<y;i++)
    {
        cin>>b[i];
    }
    int j=0;
    for(int i=0;i<(x+y);i++)
    {
        if(i<x)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[j];
            j++;
        }
    }
    sort(c,c+(x+y));
    for(int i=0;i<(x+y);i++)
    {
        cout<<c[i];
    }
    return 0;

}
    
