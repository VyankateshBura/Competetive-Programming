#include <bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
  

int main() {
	long int t;
	cin>>t;
	while(t--){
		long long int a,b;
		cin>>a>>b;
		long long int Lcm = lcm(a,b);
		cout<<Lcm/a<<" "<<Lcm/b<<endl;
	}
}