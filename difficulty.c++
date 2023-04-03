#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,d,cnt=0;;
	    cin>>n;
	    for(int i=0;i<n;i++){
	    cin>>d;
	    if(d>=1000){
	        cnt++;
	    }
	 }
	    cout<<cnt<<endl;
	}
	return 0;
}
	    

