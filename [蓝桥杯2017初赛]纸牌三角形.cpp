#include <bits/stdc++.h>
using namespace std;

int a[9]={1,2,3,4,5,6,7,8,9};
int res=0;

bool judge(int a[]){
	if((a[0]+a[1]+a[2]+a[3])==(a[4]+a[5]+a[6]+a[3])&&(a[0]+a[1]+a[2]+a[3])==(a[0]+a[8]+a[6]+a[7]))
		return 1;
	return 0;
}

int main(){
	do{
		if(judge(a))
			res++; 
	}while(next_permutation(a,a+9));
	cout<<res/6;
	return 0;
}
