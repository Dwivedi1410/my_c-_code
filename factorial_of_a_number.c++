#include<bits/stdc++.h>
using namespace std;
int fac(int n)
{
   int v=1;
   for(int i=1;i<=n;i++)
   {
     v=v*i;
   }
   return v;
}
int main()
{
    int n,v;
    cin>>n;
    v=fac(n);
    cout<<v;
}
