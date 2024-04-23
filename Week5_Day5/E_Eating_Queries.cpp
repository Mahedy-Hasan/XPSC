#include <bits/stdc++.h>
using namespace std;

int main() 
{  
    int t; 
    cin >> t;
    while(t--) 
    {
        int n, q; 
        cin >> n >> q;
        vector<long long> a(n), p(n);
        for(int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());
        for(int i = 0; i < n; ++i) 
        {
            if(i == 0)
            {
                p[i] = a[i];
            }
            else
            {
                p[i] = p[i-1] + a[i];
            }
        }


    
        while(q--) 
        {
            long long quantity; 
            cin >> quantity;
            int l = 1, r = n, ans = -1;
            while(l <= r) 
            {
                int mid = (l + r) / 2;
                if(p[mid - 1] >= quantity) 
                {
                    ans = mid;
                    r = mid - 1;
                } 
                else 
                {
                    l = mid + 1;
                }
            }
            cout << ans <<endl;
        }
    }
}   