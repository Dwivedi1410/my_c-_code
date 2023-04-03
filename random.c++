#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int l,r;
	    cin>>l>>r;
	    int a[r-1];
	    for(int i=0;i<(r-1);i++)
	    {
	        a[i]=l+i;
	    }
	    for(int i=0;i<(r-1);i++)
	    {
	        cout<<a[i]<<endl;
	    }
	    
	}
	return 0;
}
