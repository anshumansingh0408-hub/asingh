//pallindrome
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,rev,no=0;
    cout<<"enter no:";
    cin>>n;
    no=n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;

    }
    if(rev==no)
    cout<<"no is pallindrome";
    else
    cout<<"no is not a pallindrome";
    return 0;

}

