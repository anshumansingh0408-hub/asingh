#include <bits/stdc++.h>
using namespace std;
int digit_sum(int k)
{
    int a=0,sum=0;

    while(k>0)
    {
        a=k%10;   
        sum=sum+a;     
        k=k/10;   
    }

    return sum;
}

int main()
{
    int n;
    cin>>n;

    int no = digit_sum(n);
    cout<<no;

    return 0;
}
