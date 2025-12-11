//to find the smallest element
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int a[10],i,min;
     cout<<"enter elements of array";
     for(i=0;i<10;i++)
     {
         cin>>a[i];
     }
     for (i=0;i<10;i++)
     {
         if(a[i]<min)
         {
            min=a[i];
         }
     }
     cout<<"min value:"<<min;

    return 0;    
}