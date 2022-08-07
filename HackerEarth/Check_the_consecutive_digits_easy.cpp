#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin>>str;
// 	cout<<((str[0]-'0')%2==0)<<endl;
	if((str[0]-'0'+ str[1]-'0')%2==0){
		int flag = 0;
		switch(str[2]){
			case 'A':
				cout<<"invalid"<<endl;
				flag=1;
				break;
			case 'E':
				cout<<"invalid"<<endl;
				flag=1;
				break;
			case 'I':
				cout<<"invalid"<<endl;
				flag=1;
				break;
			case 'O':
				cout<<"invalid"<<endl;
				flag=1;
				break;
			case 'U':
				cout<<"invalid"<<endl;
				flag=1;
				break;
				
		}
		if(flag==0){
			if(((str[3]-'0'+ str[4]-'0'))%2!=0){
				cout<<"invalid"<<endl;
			}else{
				if(((str[4]-'0'+str[5]-'0'))%2!=0){
					cout<<"invalid"<<endl;
				}
				else{
					if(((str[7]-'0'+str[8]-'0'))%2!=0){
						cout<<"invalid"<<endl;
					}
					else{
						cout<<"valid"<<endl;
					}
					
				}
			}
			
		}
	}
	else{
		cout<<"invalid"<<endl;
	}
}