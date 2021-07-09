#include <iostream>
#include <string>
#include <queue>
#include <map>

using namespace std;

queue<string>q;   //  
map<string,int>ma;  //��¼���� 
string st,ed;
int rou[6]={-1,1,-2,2,-3,3}; 

void bfs(){
	
	q.push(st); 
	ma[st]=1; 
	
	while(q.size()){
		string a=q.front();
		
	
		
		int dis=ma[a];
		
		for(int i=0;i<a.size();i++){
			string b=a;
		//	cout<<"i ��"<<i<<endl;
			if(a[i]=='W'||a[i]=='B'){  // �����ܿ����� 
			//	cout<<"������"<<endl; 
				
				for(int j=0;j<6;j++){
					int xi=i+rou[j];
					if(xi<0||xi>=a.size()) continue;
					
					switch(j){
						
						case 0:{
							if(a[xi]=='*') {
								
							swap(b[i],b[xi]);
							
							if(ma[b]==0) {
							//	cout<<"1yyy"<<endl;
							// cout<<b<<endl;
							 q.push(b);
							 ma[b]=dis+1;	
							}
								
							 
							}
							break;
						} 
						
						case 1:{
							if(a[xi]=='*') {	
							
							swap(b[i],b[xi]);
					    	if(ma[b]==0) {
					    	//cout<<"2yyy"<<endl;
						//	 cout<<b<<endl;
							 q.push(b);
							 ma[b]=dis+1;	
							}	
							
							}
							break;
						}
						
						case 2:{
							if(a[xi]=='*'&&a[i-1]!='*'){
								
							swap(b[i],b[xi]);
					    	if(ma[b]==0) {
					    	//	cout<<"3yyy"<<endl;	
							 // cout<<b<<endl;
							  q.push(b);
							 ma[b]=dis+1;	
							}	
								
							}
							 
							 
							break;
						}
						
						case 3:{
							if(a[xi]=='*'&&a[i+1]!='*'){
							
							swap(b[i],b[xi]);
					    	if(ma[b]==0) {
					    		//	cout<<"4yyy"<<endl;
						//	 cout<<b<<endl;
							 q.push(b);
							 ma[b]=dis+1;	
							}			
								
							}
							  
							break;
						}
						
						case 4:{
							if(a[xi]=='*'&&a[i-1]!='*'&&a[i-2]!='*'){
							//cout<<"ִ��case 4"<<endl;	
							swap(b[i],b[xi]);
							if(ma[b]==0) {
							//	cout<<"5yyy"<<endl;
							 // cout<<b<<endl;
							 q.push(b);
							 ma[b]=dis+1;	
							}	
								
							}
							 
							break;
						}
						
						case 5:{
							if(a[xi]=='*'&&a[i+1]!='*'&&a[i+2]!='*'){
							
							swap(b[i],b[xi]);
							if(ma[b]==0) {
								//	cout<<"6yyy"<<endl;
							  //cout<<b<<endl;
							 q.push(b);
							 ma[b]=dis+1;	
							}
								
							}
							 
							break;
						}
						
						
					}
					
					
				}
				
			// ������� 
			
			if(b==ed){
			
				cout<<ma[b]-1<<endl;
				return ;
			}
				
				//	cout<<"yyy"<<endl;
			}
			 
			
		}
		
		q.pop();
	}
	
	
}

int main(){
	
	while(cin>> st>> ed){
		bfs();
	}
	
	return 0;
	
}
