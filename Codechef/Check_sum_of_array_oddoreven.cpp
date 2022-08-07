#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    long int N,A;
	    cin>>N>>A;
	    if(A&1){
	        if(N&1){
	            cout<<"Odd"<<endl;
	        }
	        else{
	            cout<<"Even"<<endl;
	        }
	    }
	    else{
	        if(N==1){
	            cout<<"Even"<<endl;
	        }
	        else{
	            cout<<"Impossible"<<endl;
	        }
	    }
	    
	}
	return 0;
}
