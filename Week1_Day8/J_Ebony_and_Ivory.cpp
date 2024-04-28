#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    bool possible = false;

    for (int i = 0; i <= c / a; ++i) 
    {
        int ebonyDamage = i * a;
        int remainingDamage = c - ebonyDamage;
        if (remainingDamage % b == 0) 
        {
            possible = true;
            break;
        }
    }

    if (possible) 
    {
        cout << "Yes" << endl;
    } 
    else 
    {
        cout << "No" << endl;
    }

    return 0;
}
