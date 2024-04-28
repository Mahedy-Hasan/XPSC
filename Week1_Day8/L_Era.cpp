#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        int maxDiff = 0;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] > i + 1) 
            { 
                maxDiff = max(maxDiff, a[i] - (i + 1));
            }
        }
        cout << maxDiff << endl;
    }

    return 0;
}
