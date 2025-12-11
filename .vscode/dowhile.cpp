//factorial of a no in do while loop
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,n,fact=1;
    cout<<"enter a no:";
    cin>>n;
    do
    {
        fact=fact*i;
        i++;
    } while (i<=n);
    cout<<"factorial of no:"<<fact;
    return 0;
    

}