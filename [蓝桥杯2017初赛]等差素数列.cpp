#include <bits/stdc++.h>
#define max 10000
using namespace std;

bool judge(int n){
	if(n == 2)	
		return 1;
	for(int i=2;i*i<=n;i++){
		if(n%i == 0)
			return 0;
	}
	return 1;
}

int main(){
	
	for(int i=2;i<=max;i++){
		if(judge(i)!=1)
			continue; 
		for(int j=1;j<max;j++){
			int flag=0;
			int m=i;
			for(int a=0;a<10;a++){
				m=m+j;
				if(judge(m)!=1){
					break;
				}else 
					flag++;
			}
			if(flag==9){
				cout<<j;
				return 0;
			}	
		}
	}
	return 0;
}
