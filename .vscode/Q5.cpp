//Roots of a quadratic  equation
# include<bits/stdc++.h>
# include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,x,y;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    cout<<"Enter value of c:";
    cin>>c;
    d=b*b-(4*a*c);
    if (d>0)
    {
    x=(-b+sqrt(d))/2*a;
    y=(-b-sqrt(d))/2*a;
    
    cout<<"Roots are real and unequal, roots are:"<<x<<","<<y;
    }
    else if (d==0)
    {
        x=b/2*a;
        y=b/2*a;
        cout<<"Real and equal roots ,roots are:"<<x<<","<<y;
    }
    else
    {
    x=-b/2*a;
    y=sqrt(d)/(2*a);
    cout<<"Roots are imaginary, roots are:"<<x<<"+"<<y<<"i"<<"&"<<x<<"-"<<y<<"i";
    }
    return 0;
}