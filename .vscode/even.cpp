# include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,c=0;
    while(i<=100)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
            c++;
        }
        i++;
    }
    cout<<c;    
    return 0;  

}