#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[10]={0};
	
	for(int a=1;a<=9;a++){
		arr[a]=1;
		for(int b=0;b<=9;b++){
			if(arr[b]==1)
				continue;				
			arr[b]=1;//cout<<1;
			for(int c=0;c<=9;c++){
				if(arr[c]==1)
					continue;
				arr[c]=1;//cout<<2;
				for(int d=0;d<=9;d++){
					if(arr[d]==1)
						continue;
					arr[d]=1;//cout<<3;
					for(int e=1;e<=9;e++){
						if(arr[e]==1)
							continue;
						arr[e]=1;//cout<<4;
						for(int f=0;f<=9;f++){
							if(arr[f]==1)
								continue;
							arr[f]=1;//cout<<5;
							for(int g=0;g<=9;g++){
								if(arr[g]==1)
									continue;
								arr[g]=1;//cout<<6;
								for(int h=0;h<=9;h++){
									if(arr[h]==1)
										continue;
									arr[h]=1;//cout<<7;
									for(int i=1;i<=9;i++){
										if(arr[i]==1)
											continue;
										arr[i]=1;//cout<<8;
										for(int j=0;j<=9;j++){
											if(arr[j]==1)
												continue;
											if((a*1000+b*100+c*10+d-e*1000-f*100-g*10-h)*(i*10+j)==900){
												cout<<"("<<a<<b<<c<<d<<"-"<<e<<f<<g<<h<<")*"<<i<<j<<"="<<900;
											}arr[j]=0;									
										}arr[i]=0;
									}arr[h]=0;
								}arr[g]=0;
							}arr[f]=0;
						}arr[e]=0;
					}arr[d]=0;
				}arr[c]=0;
			}arr[b]=0;
		}arr[a]=0;
	}
	return 0;
}
