#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n=100;
	for(;n<=999;n++){
		if(n==(pow(n%10,3)+pow(n/100,3)+pow(n/10%10,3)))
			cout<<n<<endl;
	}
	return 0;
}
