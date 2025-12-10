#include <bits/stdc++.h>
using namespace std;
void fibonacci() {
    int n;
    cout << "Enter the number of term:";
    cin >> n;
    int a = 0, b = 1, c;

    cout << "Fibonacci series:";

    if (n >= 1)
     cout << a << " ";
    if (n >= 2)
     cout << b << " ";

    for (int i = 3; i <= n; i++)
     {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    
}
int main() 
{
    fibonacci(); 
    return 0;
}

