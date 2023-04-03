#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cout<<"your quadratic equattion is ="<<a<<"x^2 +"<<b<<"x +"<<c;
        d=(b*b)-(4*a*c);
        if(d>=0)
        {
            cout<<"\nroots are real";
            x=(-b + pow(d,0.5))/2*a;
            y=(-b - pow(d,0.5))/2*a;
            cout<<"\nroots are ="<<x<<"\n"<<y;
        }
        else if(d=0)
        {
            cout<<"roots are real and equal =";
            x=(-b + pow(d,0.5))/2*a;
            cout<<"\nroots are ="<<x<<"\n"<<x;
        } 
        else
        {
            cout<<"\nroots are imaginary";

        }   

    }
    return 0;
    
}