#include<bits/stdc++.h>
using namespace std;

int n;
long long ans;

int main(){
	cin>>n;
	int a[n],b[n],c[n];
	int i;
	for(i=0;i<n;i++)cin>>a[i];
	for(i=0;i<n;i++)cin>>b[i];
	for(i=0;i<n;i++)cin>>c[i];
	sort(a,a+n);
	sort(b,b+n);
	sort(c,c+n);
	
	int p=0,q=0;
	for(i=0;i<n;i++){
		while(p<n&&a[p]<b[i])p++;
		while(q<n&&c[q]<=b[i])q++;
		ans+=((long long)p*(n-q));
	}
	cout<<ans;
}
