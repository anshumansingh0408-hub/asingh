# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,sum,num,b,newsum;
    cout<<"enter a no";
    cin>>n;
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
   
if (sum>10)
{
    num=sum;
    while(num>0)
    {
        b=num%10;
        newsum=newsum+b;
        num=num/10;
    }
    cout<<newsum;
    
}
else
cout<<sum;
return 0;
    

}