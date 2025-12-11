//to find the sum of n no
# include<bits/stdc++.h>
using namespace std;
int sum(int);//function declaration
int main()
{
    int n,f;
    cout<<"Enter a number:";
    cin>>n;
    f=sum(n);//func calling
    cout<<"Sum of "<<n<<" numbers: "<<f;
    return 0;
}
int sum(int a)//func defination
{
    if(a==0 || a==1)//base condition
    return  1;
    else
    return(a+sum(a-1));
}