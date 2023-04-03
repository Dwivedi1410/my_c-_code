#include<bits/stdc++.h>
using namespace std;
void change(int *a, int*b)
{
     swap(*a,*b);
}
int main()
{
    int x=10,y=20;
    cout<<"before function x="<<x<<"and y="<<y<<endl;
    change(&x,&y);
    cout<<"after function x="<<x<<"and y="<<y;
    return 0;
}