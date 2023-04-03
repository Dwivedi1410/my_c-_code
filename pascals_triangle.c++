#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,p,j;
    cout<<"enter n=";
    cin>>n;
    for(r=0;r<n;r++)
    {
        for(j=1;j<=(n+r);j++)
       {
        for(p=0;p<=r;p++)
        {
            int fr=1,frp=1,fp=1,s=0;
            for(int i=1;i<=r;i++)
            {
                 fr=fr*i;
            }
             for(int i=1;i<=(r-p);i++)
            {
                 frp=frp*i;
            }
             for(int i=1;i<=p;i++)
            {
                 fp=fp*i;
            }
            s=(fr/(frp*fp));
            //for(j=1;j<=(n+r);j++)
            
                if(j<(n-r))
                {
                    cout<<" ";
                }
                else
                {
                    cout<<s;
                }
            
        }
    }
        cout<<"\n";
    }
}