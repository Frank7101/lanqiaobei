#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	int num[205];
	cin>>n;
	
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	sort(num,num+n);
	for(int i=0;i<n;i++){
		cout<<num[i]<<" ";
	}
	
	return 0;	
}
