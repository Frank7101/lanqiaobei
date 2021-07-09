#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int a=1,b=0,c=0;
	for(;a<=9;a++){
		for(b=0;b<=9;b++){
			for(c=0;c<=9;c++){
				if((a*2+b*2+c)==N)
					cout<<a<<b<<c<<b<<a<<endl;
//				else if((a*2+b*2+c*2)==N)
//					cout<<a<<b<<c<<c<<b<<a<<endl;
			}
		}
	}
	for(a=1;a<=9;a++){
		for(b=0;b<=9;b++){
			for(c=0;c<=9;c++){
//				if((a*2+b*2+c)==N)
//					cout<<a<<b<<c<<b<<a<<endl;
				if((a*2+b*2+c*2)==N)
					cout<<a<<b<<c<<c<<b<<a<<endl;
			}
		}
	}
	return 0;	
}
