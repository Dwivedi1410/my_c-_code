/*
# POINTER:variable that stores address of other variables.
# DECLARATION:int*p(pointer to integer),char*p(pointer to character)so on.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *p;     //initialisation of pointer.
    p=&a;            //this will store the address of a.
    cout<<p;     //this will print the address of a.
    cout<<"\n"<<*p;    //this will print the value that is stored in that address.
    cout<<"\n"<<&a;        //this will also give the address of a.
    *p=12;             //dereferencing(mtlab jis jagah ka usney address store kiya tha uskey andr ki value of 12 ho jayegi ).
    cout<<"\n"<<a;         // print the new value of a(modified value of a).
    cout<<"\n"<<(p+1);        //this will increase the value of address let's say ki kisi jagah ka address 200 hai r uska datatype int hai t (P+1) karney p uska address 4 bits badh jayega, so uska naya address 204 ho jayega.
    cout<<"\n"<<sizeof(int);   //this will give us the size of int data type.
    /*cout<<"\n"<<*(p+1);       //this will print some garbage value kyuki hamney uss address p abhi kch value dali he nahi hai.
    (p+1)=55;*/                //~~~~~~~ (ye cheej poochni hai ki ham krr sktey hai ki nahi).
    return 0;
}
    

    
    