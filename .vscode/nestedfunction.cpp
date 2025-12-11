# include<bits/stdc++.h>
using namespace std;
int calc();
int sum(int,int);
int main()
{
    int c;
    c=calc();
    cout<<c;
    return 0;
}
int calc()
{
    int a,b,c;
    cin>>a>>b;
    c=sum(a,b);
    return c;
}
int sum(int a,int b)
{
    return (a+b);
}
