//reversing  by recurssion
# include<bits/stdc++.h>
using namespace std;
int reverse(int);//function declaration
int main()
{
    int n,f;
    cout<<"Enter a number:";
    cin>>n;
    f=reverse(n);//func calling
    //cout<<"reverse of no"<<f;
    return 0;
}
int reverse(int a)//func defination
{
    // int rev;
    if (a==0){
    return 0;}
    else{
        cout << a%10;
        return reverse(a/10);
    }
    
}
