#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
string a="cat",b="tack";
//int count=0;
//cin>>a;
//cout<<a;
sort(a.begin(),a.end());
sort(b.begin(),b.end());

//cout<<a;
/*int n=a.length();
int x=b.length();
if(n!=x)
{
    cout<<"strings are not equal";
}
/*for(int i=0;i<n/2;i++)
{
    swap(a[i],a[n-1-i]);
}
cout<<a;*/
/*for(int i=0;i<n;i++)
{
    if(a[i]==b[i])
    { count++;}
}
if(count==n)
{
    cout<<"strings are equal"<<endl;
}
else
{
    cout<<"strings are not equal"<<endl;
}
else
{*/
int y=a.compare(b);
if(y==1)
{
    cout<<" \n strings are equal";
}
else
{
    cout<<"strings are not equal";
}
}
return 0;
}