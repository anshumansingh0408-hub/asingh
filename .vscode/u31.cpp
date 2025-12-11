//sum of digits
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,sum;
    cout<<"enter a no";
    cin>>n;
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }

    cout<<sum;
    return 0;
}