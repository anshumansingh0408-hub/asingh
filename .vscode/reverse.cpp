//reverse no
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,rev=0;
    cout<<"enter no";
    cin>>n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;

    }
    cout<<"reversed no"<<rev;
    return 0;

}

