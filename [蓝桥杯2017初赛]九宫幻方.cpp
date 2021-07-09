#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[10][10]={{4,9,2,3,5,7,8,1,6},
	{2,9,4,7,5,3,6,1,8},
	{8,3,4,1,5,9,6,7,2},
	{4,3,8,9,5,1,2,7,6},
	{2,7,6,9,5,1,4,3,8},
	{6,7,2,1,5,9,8,3,4},
	{8,1,6,3,5,7,4,9,2},
	{6,1,8,7,5,3,2,9,4}};
	
	int b[9];
	for(int i=0;i<9;i++){
		cin>>b[i];
	}
	int m, n=0;
	
	for(int i=0;i<8;i++){
		for(int j=0;j<9;j++){
			if(b[j]!=0&&b[j]!=arr[i][j]){
				break;
			}
			if(j==8){
				m=i;n++;
			}
		}	
	}	

	if(n>1){
		cout<<"Too Many"<<endl;
	}else{
		for(int l=0;l<9;l++){
			cout<<arr[m][l]<<" ";
			if(l%3==2)
				cout<<endl;
		}
	}
	
			
	return 0;	
}
