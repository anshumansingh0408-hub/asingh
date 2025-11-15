# include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum;
    vector<int>num{1,2,3,4,5};
    for (int i=0;i<num.size();i++)
    {
        sum=sum+num[i];
    }
    cout<<sum;
    num.push_back(53);
    num.push_back(44);
    for(int i=0;i<num.size();i++)
    {
        cout<<num[i];
        cout<<endl;
    }
    

    return 0;
}


