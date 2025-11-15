# include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
            cout<<" ";        
        }
        
        for(int k=1;k<=i;k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
    for(int m=4;m>=1;m--)
    {
        for(int l=1;l<=5-m;l++)
        {
            cout<<" ";
        }
        for(int n=1;n<=m;n++)
        {
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}

