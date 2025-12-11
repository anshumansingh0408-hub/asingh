//sum of digits by recurssion
# include<bits/stdc++.h>
using namespace std;
int digitsum(int);//function declaration
int main()
{
    int n,f;
    cout<<"Enter a number:";
    cin>>n;
    f=digitsum(n);//func calling
    cout<<"Sum of digits: "<<f;
    return 0;
}
int digitsum(int a)//func defination
{

    if (a==0)
    return 0;
    else
    return (a%10+ digitsum(a/10));
    
}

    