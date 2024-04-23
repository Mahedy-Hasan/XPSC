#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    int k;
    cin>>k;
    while (k--)
    {
        int l,r;
        cin>>l>>r;
        int ans = 0;
        int upperBound = upper_bound(a.begin(), a.end(), r)-a.begin();
        int lowerBound = lower_bound(a.begin(), a.end(), l) - a.begin();
        int count = upperBound-lowerBound;

        cout<<count<<" ";
    }
    

    return 0;
}