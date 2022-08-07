//There are two strings S and T. You can delete one character and add one character of string S in T as an operation each You need to find minimum no of operations required to convert string T to anagram of string S

//Hashing
#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string S,T;
		cin>>S>>T;
		int op=0,count=0;
		long int hsh[26] = {0};
		for(int i=0;i<S.size();i++){
			hsh[S[i]-'a']++;
		}
		for(int i=0;i<T.size();i++){
			if(hsh[T[i]-'a']>=1){
				hsh[T[i]-'a']--;
				count++;
			}
		}
		if(T.size()>S.size()){
			op = (S.size()-count)*2;
			op+= T.size()-S.size();
		}
		else if(T.size()<S.size()){
			op = (S.size()-count);
			op += T.size()-count;
		}
		else{
			op = (S.size()-count)*2;
		}
		
		cout<<op<<endl;
	}
}
