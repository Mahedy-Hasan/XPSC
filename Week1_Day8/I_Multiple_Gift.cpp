#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long x, y;
    cin >> x >> y;
    long long ans = 0;
    while(y >= x) 
    {
        x *= 2;
        ans += 1;
    }
    cout << ans << endl;
    return 0;
}
