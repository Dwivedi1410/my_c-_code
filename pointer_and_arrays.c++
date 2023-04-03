#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number[5]={2,3,5,7,9};
    cout<<number<<endl;         //this stores the address of first number of array.
    cout<<&number[0]<<endl;        //this also will show the address of first number of array. note the address of upper line is same as the address of this line bc they both are showing the same address.
    cout<<*(number + 2)<<endl;         //kyuki "number" first number jo hai array ka uska address store karta hai phir ham usmey "+ 2" kar rahey hai (basically ham address m + 2 kar rahey hai t ye 8 byte aagey jayega kyuki ek box 4 byte space carry karta hai int ka. t ham 5 valey box m aajayege)then ham usey derefrence kar rahey hai with the help of "*". t ye 5 print kareyga. 
    cout<<number[2]<<endl;         //ye bhi same output dega jo upr vali line ka code de raha hai bss yaha prr derefrencing k liye square bracket "[]" use ho rahey hai.


    int yes[5];
    for(int i=0;i<=4;i++)
    {
        cout<<"number :";
        cin>>yes[i];         //entering the values of array.
    }

    for(int i=0;i<=4;i++)
    {
        cout<<*(yes+ i)<<"  ";      //kyuki yes jo first number hai uska address store krta hai phir usemy "+ i" krkey usey derefrence krkey ham uskey elements ko print krr lenge.
    }
    return 0;
}
