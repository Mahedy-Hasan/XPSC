// Codeforce Round Round 859 Div4(1870D)

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        ll n, q;
        cin >> n >> q;
        
        ll a[n+5],pre[n+5];
        memset(pre,0,sizeof(pre));

        for (ll i = 1; i <= n; i++) 
        {
            cin>>a[i];
        }
        
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i-1]+a[i];
        }
        
        while (q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;

            ll sum = pre[n] - pre[r] + pre[l-1];
            sum = sum+((r-l+1)*k);

            if (sum%2==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        
    }
    
    return 0;
}
