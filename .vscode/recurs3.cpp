//power fun  by recurssion
# include<bits/stdc++.h>
using namespace std;
int power(int,int);//function declaration
int main()
{
    int a,b,f;
    cout<<"Enter value of a and b:";
    cin>>a>>b;
    f=power(a,b);//func calling
    cout<<"a to power b: "<<f;
    return 0;
}
int power(int x,int y)//func defination
{
    if(y==0)
    return 1;
    else
    return(x*power(x,y-1));
    
}
