#include<bits/stdc++.h>
using namespace std;
int arm(int n)
{
    int c=0,n1,s=0;
    n1=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    //n=n1;
    while(n1!=0)
    {
        s=s+pow((n1%10),c);
        n1=n1/10;
    }
    return s;
}
int main()
{
    int n,f;
    cin>>n;
    f=arm(n);
    if(f==n)
    cout<<"armstrong";
    else
    cout<<"not an armstrong";
}