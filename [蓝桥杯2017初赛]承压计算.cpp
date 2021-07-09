#include<iostream>
using namespace std;

double a[40][40] = {0};
int main()
{   
    double max = -1e18;
    double min = 1e18;
    for(int i = 1; i < 30;i++) {
        for(int j = 1; j <= i; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 2; i <= 30; i++) {  //从上往下 计算出最后一行每个X的大小
        for(int j = 1; j <= i; j++) {
            a[i][j] +=  (a[i-1][j-1]/2.0 + a[i-1][j]/2.0);
        }
    }

    for(int i = 1; i <=30; i++) {
        if(a[30][i] > max)   max = a[30][i];
        if(a[30][i] < min)   min = a[30][i];
    }
    printf("%lf",2086458231/min * max);
    return 0;
}
