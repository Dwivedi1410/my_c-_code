#include<bits/stdc++.h>
using namespace std;
void greatest(int a,int b,int c)
{
    (a>b)?((a>c)?cout<<a:cout<<c):((b>c)?cout<<b:cout<<c);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    greatest(a,b,c);
}