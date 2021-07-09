#include<bits/stdc++.h>
using namespace std;

int a[10]={1,2,3,4,5,6,7,8,9},res=0,vis[10],temp1;
bool fun(int x)
{
	int t1=0,t2=0;
	for(int i=x,j=1;i>=0;i--,j*=10){
		t1=a[i]*j+t1;
	}
	for(int i=8,j=1;i>x;i--,j*=10){
		t2=a[i]*j+t2;
	}
	 temp1=t1*t2;
	int temp=temp1;
	memset(vis,0,sizeof(vis));
	while(temp){
		vis[temp%10]=1;
		temp/=10;
	}
	for(int i=1;i<=9;i++){
		if(!vis[i])return false;
	}
	return true;
}
int main()
{
	
	for(int i=0;i<9;i++)
		a[i]=i+1;
	do{
		for(int i=0;i<8;i++){
			if(fun(i)){
				res++;
			}
		}
	}while(next_permutation(a,a+9));
	cout<<res/2;
  return 0;
}
