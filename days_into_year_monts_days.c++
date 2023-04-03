#include<bits/stdc++.h>
using namespace std;
int main()
{
    int days,count=0,m=0;
    cout<<"enter days=";
    cin>>days;
    while(days>=365)
    {
        count++;
        days=days-365;
    }
    while(days>=30)
    {
        m++;
        days=days-30;
    }
    cout<<" year="<<count<<"\n months="<<m<<"\n days="<<days;
    return 0;
}
   