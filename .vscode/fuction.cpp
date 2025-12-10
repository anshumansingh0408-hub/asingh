//addition of two no using function
# include<bits/stdc++.h>
using namespace std;
int sum(int,int); //function declaration. if we declare function here, this line is not needed here to write
int main()
{
    int a,b,c;
    cout<<"enter the two no:";
    cin>>a>>b;
    c=sum(a,b); //function calling
    cout<<"sum of no:"<<c;
    return 0;
}
int sum(int x,int y) //function defination
//alternate we can replace by return(x+y)
{
    int z;
    z=x+y;
    return z;
}



