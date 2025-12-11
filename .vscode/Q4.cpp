//Grading system
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks out of 100:";
    cin>>marks;
    if (marks>90)
    cout<<"Grade is A1";
    else if (marks>80 && marks<=90)
    cout<<"Grade is A2";
    else if (marks>70 && marks<=80)
    cout<<"Grade is B1";
    else if (marks>60 && marks<=70)
    cout<<"Grade is B2";
    else if (marks>50 && marks <=60)
    cout<<"Grade is C";
    else if (marks>40  && marks<=50)
    cout<<"Grade is D";
    else if (marks>30 && marks<=40)
    cout<<"Grade is E";
    else 
    cout<<"Grade is F";
    return 0;
}
