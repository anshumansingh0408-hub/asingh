# include<bits/stdc++.h>
using namespace std;
string prime(int n)
{
    int a=0;
    for(int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            a++;
        }
    }
    if(a==2)
      return "no is prime";
    else
      return "no is composite";
    
}
int main()
{
    int n;
    cin>>n;

    string no = prime(n);
    cout<<no;

    return 0;
}

