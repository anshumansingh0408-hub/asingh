#include <bits/stdc++.h>
using namespace std;
int main()
{

     int a[10],i,sum=0;
     float avg=0;
     cout<<"enter elements of array";
     for(i=0;i<10;i++)
     {
         cin>>a[i];
     }
     for (i=0;i<10;i++)
     {
         sum=sum+a[i];
         avg =sum/10;
     }
     cout<<"avg of elements:"<<avg;
    return 0;
    
}