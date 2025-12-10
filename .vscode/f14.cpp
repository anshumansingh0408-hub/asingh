//pallindrome by function
# include<bits/stdc++.h>
using namespace std;
string palindrome(int n)

{
    int a,rev,no=n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;

    }
    if(rev==no)
    return "no is pallindrome";
    else
     return "no is not a pallindrome";
    

}
int main()
{
    int k;
    cin>>k;

    string number=palindrome(k);
    cout<<number;

    return 0;
}


