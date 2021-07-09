#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int a[35]={0,1,1},b[35]={0};
    
    cout<<1<<endl;
    if(N>1)
        cout<<1<<" "<<1<<endl;
    
    for (int i = 3; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            b[j]=a[j]+a[j-1];
            cout<<b[j]<<" ";
        }
        cout<<endl;
        memcpy(a,b,sizeof(b));
    }
    
    return 0;
}