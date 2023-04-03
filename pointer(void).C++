//void pointer basically sabhi datatype ko accept karta hai hme sabhi data type k liye alg alg pointer bananey ki jarurat nahi hai.
#include<bits/stdc++.h>
using namespace std;

void print(void* ptr ,char type){          // koi bhi datatype ho hamney uska address void pointer m store kar liya hai , (char type) basically ye store kareyga ki kon sa datatype aa raha hai.
    switch(type) {
        case 'i':cout<<*((int*) ptr)<<endl;break;           //(int*)ptr : jo bhi void m address ho ham usey int pointer m store kr lenge,*(int*)ptr ko derefrencing k liye usey krtey hai(value pata krney k liye ki usmey m kya value hai).
        case 'c':cout<<*((char*) ptr)<<endl;break;     // same statement as above.
    }
}
int main()
{
    int number=5;
    char letter='a';
    print(&number,'i');
    print(&letter,'c');
    return 0;
}