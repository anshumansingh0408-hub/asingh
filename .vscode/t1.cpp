#include <bits/stdc++.h>
using namespace std;
int main(){
    int age,Annual_Income;
    char citizen;
    cout<<"If you are resident of India, Press Y:";
    cin>>citizen;
    cout<<"Enter the Age:";
    cin>>age;
    cout<<"Enter the Annual Income:";
    cin>>Annual_Income;
    if (citizen=='Y')
    {
        if (age>=60)
        {
            if (Annual_Income<=200000)
            {cout<<"You are eligible for penson";}
            else
            {cout<<"Your income is more than 2 lakhs";}
        }
        else
        cout<<"Age is less than 60 years";
    }
    else
    cout<<"You are not an Indian citizen, you can not apply for pension";
    return 0;
}