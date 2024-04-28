#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    
    int l = 0,r=0;
    long long ans = 0;

    while (l<n && r<m)
    {
        int count1 = 0;
        int count2 = 0;
        int current = a[l];

        while (a[l] == current && l<n)
        {
            count1++;
            l++;
        }

        while (current > b[r])
        {
            r++;
        }
        
        while (b[r] == current && r<m)
        {
            count2++;
            r++;
        }
        ans += (1ll * count1 * count2);
    }
    cout<< ans <<'\n';

    
    return 0;
}