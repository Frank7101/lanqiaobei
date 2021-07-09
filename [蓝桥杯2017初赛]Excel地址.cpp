#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	char s[100];
	while(cin>>n){
		n--;
		int i=0;
		while(n>=0){
			
			s[i++]=('A'+n%26);			
			
			n=n/26-1;
		}
		i--;
		while(i>=0){
			cout<<s[i--];
		}
		cout<<endl;
	}
	
	return 0;
} 
