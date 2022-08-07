#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

int main()
{
    string pattern,s;
    cin>>pattern;
    cin.ignore();
    getline(cin,s);
    cout<<s<<endl;
       int j=0;
        string hsh[26] = {""};
        string str;
        for(int i=0;i<s.size();i++){
            if(s[i]=' '){
                int ind = pattern[j]-'a';
                cout<<ind<<" i value is"<<i<<endl;
                if(ind!=-97){
                    cout<<"inside if"<<endl;
                    cout<<hsh[ind]<<endl;
                    if(hsh[ind]!=str&&hsh[ind]!=""){
                        cout<<"This is not in pattern"<<endl;
                        break;
                    }
                    else if(hsh[ind]==str&&hsh[ind]!=""){
                        str.clear();
                        j++;
                        
                    }
                    else{
                        cout<<str<<" pushed at index "<<ind<<endl;
                        hsh[ind] = str;
                        str.clear();
                        j++;
                    } 
                    
                }
                
            }
            else{
               str.push_back(s[i]); 
            }
        }
        
        cout<<"This is in pattern";
    return 0;
}