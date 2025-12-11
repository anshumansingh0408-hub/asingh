//check no is prime or composite

# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0;
    cout<<"enter a no";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if (n%2==0)
        {
            a++;
        }
    }
    if(a==2)
    cout<<"no is prime";
    else
    cout<<"no is composite";
    return 0;
}


