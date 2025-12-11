//To traverse the elements of  an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cout<<c;

     int a[10],i,sum=0;
     cout<<"enter elements of array";
     for(i=0;i<10;i++)
     {
         cin>>a[i];
     }
     for (i=0;i<10;i++)
     {
         sum=sum+a[i];
     }
     cout<<"sum of elements:"<<sum;
    return 0;
    
}