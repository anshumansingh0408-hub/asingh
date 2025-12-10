# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],b[6][6],c[3][3],i,j;
    cout<<"Enter element of 1st matrix:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of 2nd matrix:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<" elements of 3rd matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


