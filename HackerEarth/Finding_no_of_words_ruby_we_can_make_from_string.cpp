/*

Little Jhool is still out of his mind - exploring all his happy childhood memories. And one of his favorite memory is when he found a magical ghost, who promised to fulfill one of Little Jhool's wish.

Now, Little Jhool was a kid back then, and so he failed to understand what all could he have asked for from the ghost. So, he ends up asking him something very simple. (He had the intuition that he'd grow up to be a great Mathematician, and a Ruby programmer, alas!) He asked the ghost the power to join a set of *the letters r, u, b and y * into a real ruby. And the ghost, though surprised, granted Little Jhool his wish...

Though he regrets asking for such a lame wish now, but he can still generate a lot of real jewels when he's given a string. You just need to tell him, given a string, how many rubies can he generate from it?

Input Format:
The first line contains a number t - denoting the number of test cases.
The next line contains a string.

Output Format:
Print the maximum number of ruby(ies) he can generate from the given string.

Constraints:
1 ≤ t ≤ 100
1 ≤ Length of the string ≤ 100


*/

//Hashing Solution

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
		int hsh[26] = {0};//Hash array declared

		string str;
		cin>>str;

        //Incrementing the array index value corresponding to the letter
		for(int i=0;i<str.size();i++){
			hsh[str[i]-'a']++;
		}
		// cout<<hsh[17]<<" "<<hsh[20]<<" "<<hsh[1]<<" "<<hsh[24]<<endl;
		int res = min({hsh[17],hsh[20],hsh[1],hsh[24]});
        
		cout<<res<<endl;
	}
	

}