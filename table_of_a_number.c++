#include<bits/stdc++.h>
using namespace std;
int table(int n)
{
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    table(n);
}