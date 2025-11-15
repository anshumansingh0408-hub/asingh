#include <bits/stdc++.h>
using namespace std;
int main()
{

     int a[10],i,max=0;
     cout<<"enter elements of array";
     for(i=0;i<10;i++)
     {
         cin>>a[i];
     }
     for (i=1;i<10;i++)
     {
         if(a[i]>max)
         {
            max=a[i];
         }
     }
     cout<<"max value:"<<max;

    return 0;
    
}