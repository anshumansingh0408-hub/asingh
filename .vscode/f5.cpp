#include <bits/stdc++.h>
using namespace std;
int power(int ,int );
int main()
{
    int x,y;
    cout<<"enter the x and y:";
    cin>>x>>y;
    int result =power(x,y);
    cout<<result;
    
}
int power(int x,int y)
{
    int res=1;
    while(y>0)
    {
        res=res*x;
        y--;
    }
    return res;
}
