//Simple Calculator
# include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,a,b;
    cout<<"Enter 1st no:";
    cin>>a;
    cout<<"Enter 2nd no:";
    cin>>b;
    cout<<"Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division:";
    cin>>n;
    if (n==1)
    cout<<"Addition of no's:"<<a+b;
    else if (n==2)
    cout<<"Subtraction:"<<a-b;
    else if(n==3)
    cout<<"Multiplication:"<<a*b;
    else if (n==4)
    cout<<"Division:"<<a/b;
    else
    cout<<"Enter a valid no";
    return 0;



}