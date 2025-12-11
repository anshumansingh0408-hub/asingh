// comparison
# include<bits/stdc++.h>
using namespace std;
int compare(int,int);
int  main()
{
    int a,b,c;
    cout<<"enter two no:";
    cin>>a>>b;
    c=compare(a,b);
    cout<<"bigger no is"<<c;
    return 0;
}

    int compare(int x,int y)
    {
        int c;
        if(x>y)
        c=x;
        else
        c=y;
        return c;


    }
//int compare(int a,int b){}
//if (a>b)
//return a;
//else
//return b; }
//int main()
//int a,b;
//cout<<"enter two no:";
//cin>>a>>b;
//cout<<compare(a,b)<<"is greater";
//return 0;