//even odd using function
# include<bits/stdc++.h>

using namespace std;

string evenodd(int k)
{
    if (k % 2 == 0)
        return "even";
    else
        return "odd";
}

int main()
{
    int n;
    cin >> n;

    string no = evenodd(n);
    cout << no;

    return 0;
}
