//check no is prime or composite
//if we take i=2 then c=1
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i=1;
    cout<<"enter no:";
    cin>>n;
    while(i<=n)
    {
        if(n%i==0)
        {
            a++;
        }
        i++;
    }
    if(a==2)
    cout<<"no is prime";
    else
    cout<<"no is composite";
    return 0;
}