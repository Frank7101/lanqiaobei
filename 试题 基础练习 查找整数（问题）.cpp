#include <bits/stdc++.h>
using namespace std;

int  main(){
	int n,ret;
	string s;
	char a;
	cin>>n;getchar();
	getline(cin,s);
	cin>>a;
	
	ret = s.find(a);
	if(ret>0){
		cout<<(ret+2)/2<<endl;
	}else{
		cout<<"-1";
	}
	return 0;
}
