#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int q;
    cin>>q;
    while(q--)
    {
        long long coins;
        cin>>coins;
        int index = upper_bound(a.begin(), a.end(), coins) - a.begin();
        cout<<index<<"\n";
    }
    return 0;
}
