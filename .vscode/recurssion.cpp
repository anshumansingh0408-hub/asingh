//to find the factorial of a no
# include<bits/stdc++.h>
using namespace std;
int factorial(int);//function declaration
int main()
{
    int n,f;
    cout<<"Enter a number:";
    cin>>n;
    f=factorial(n);//func calling
    cout<<"Factorial of given number:"<<f;
    return 0;
}
int factorial(int a)//func defination
{
    if(a==0 || a==1)//base condition
    return  1;
    else
    return(a*factorial(a-1));//in most of the cases main condition is written in else part
}

