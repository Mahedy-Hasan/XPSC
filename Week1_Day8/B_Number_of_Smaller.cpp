#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<int> a(n), b(k);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < k; i++)
    {
        cin>>b[i];
    }

    int l = 0,r=0,ans=0;

    while (r<k)
    {
        while (b[r]>a[l]  && l<n)
        {
            ans++;
            l++;
        }
        r++;
        cout<<ans<<" ";
    }
    
    

    
    return 0;
}