#include <bits/stdc++.h>
using namespace std;
struct node{
    int ye;
    int mo;
    int da;
    int all;//为了后面排序需要
}no[40004];
int k=0;
int hh[2][14]={
{0,31,28,31,30,31,30,31,31,30,31,30,31},
{0,31,29,31,30,31,30,31,31,30,31,30,31}
};//整个这样的数组挺好的

int run(int x)
{
    if(x%400==0||x%4==0&&x%100!=0)
        return 1;
    else
        return 0;
}
void check(int year,int mon,int day)
{
    int tem;
    if(year>60)
    {
        year=1900+year;
        tem=run(year);
    }
    else{
        year=year+2000;
        tem=run(year);
    }
    if(mon>12||mon<1)
        return ;
    if(day>hh[tem][mon]||day<1)
        return ;
    no[k].ye=year;
    no[k].mo=mon;
    no[k].da=day;
    no[k].all=year*10000+mon*100+day;
    k++;
}
bool cmp(struct node x,struct node y)
{
    return x.all<y.all;
}
int main()
{
    int a,b,c;
    scanf("%d/%d/%d",&a,&b,&c);
    check(a,b,c);
    check(c,a,b);
    check(c,b,a);
    sort(no,no+k,cmp);
    int ans=0;
    for(int i=0;i<k;i++)
    {
        if(no[i].all!=ans)
        printf("%d-%02d-%02d\n",no[i].ye,no[i].mo,no[i].da);
        ans=no[i].all;
    }

    return 0;
}
