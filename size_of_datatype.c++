#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,a;
    double avg;
    cout<<"for how many numbers you want to calculate the sum and avg =";
    cin>>n;
    for(int i=1;i<=n;i++)
    {   cout<<"enter the value of "<<i<<" number =";
        cin>>a;
        sum=sum+a;
        a=0;
    }
    avg=sum/n;
    cout<<sum<<"\n"<<avg;
    return 0;
}
   