//A double string is a string which is not empty as well as it can be broken into two parts A and B such that A=B and A+B = P
//You are given a input string you need to find whether a particular string is a double string and if not whether it can be converted into double string is possible print yes otherwise no

//Brute force approach
// #include <iostream>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		string S;
// 		cin>>S;
// 		int i=0,j=i+1;
// 		if(S.size()<=1){
// 			cout<<"No"<<endl;
// 			continue;
// 		}
// 		int flag=0;
// 		while(i<j){
// 			for(int k=j;k<S.size();k++){
// 				if(S[i]==S[k]){
// 					cout<<"Yes"<<endl;
// 					flag=1;
// 					break;
// 					j=k;
// 				}
// 			}
			
// 			if(flag==1){
// 				break;
// 			}
// 			i++;
// 			if(j==i&&i<S.size()-1){
// 				j=i+1;
// 			}
// 		}

// 		if(flag==0){
// 			cout<<"No"<<endl;
// 		}
// 	}
// }



//Hashing Approach

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int hsh[100]={0},flag=0;
        string S;
        cin>>S;
        for(int i=0;i<S.size();i++){
            hsh[S[i]-'a']++;
        }
        for(int i=0;i<100;i++){
            if(hsh[i]>=2){
                cout<<"Yes"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"No"<<endl;
        }
    }

    return 0;
}