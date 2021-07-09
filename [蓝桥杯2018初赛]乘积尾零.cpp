#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int ans=0;
    int er=0;
    int wu=0;
    for(int i=0;i<100;i++)
    {

        int a;
        cin>>a;0;
        while(a%2==0)
        {
            er++;
            a=a/2;
        }
        while(a%5==0)
        {
            wu++;
            a=a/5;
        }
    }
    cout<<min(er,wu)<<endl;
    cout<<er<<wu;
    return 0;
}
