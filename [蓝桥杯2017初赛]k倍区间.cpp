#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll arr[100005]={0};
	ll sum=0;
	ll count[100005]={0};
	ll n,k;
	cin>>n>>k;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i==0)
			arr[i]=arr[i]%k;
		else
			arr[i]=(arr[i-1]+arr[i])%k;
	}
	
	for(int i=0;i<n;i++){
		sum += (count[arr[i]]++);
	}
	cout<<(sum + count[0])<<endl;
	return 0;
}
