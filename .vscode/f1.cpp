//simple interest
# include<bits/stdc++.h>
using namespace std;
float SI(int,int,int);
int main()
{
    int a,b,c;
    float d;
    cout<<"enter Principle,interest,time:";
    cin>>a>>b>>c;
    d=SI(a,b,c); 
    cout<<"simple interest:"<<d;
    return 0;
}
float SI(int x,int y,int z) 
{
    float k;
    k=(x*y*z)/100.0;
    return k;
}
