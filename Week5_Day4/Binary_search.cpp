// 12 11
// 4 8 9 10 11 15 16 17 18 20 21 25
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int l=0,r=n-1,index=-1;
    while (l<=r)
    {
        int mid = (l+r)/2;
        if (key==a[mid])
        {
            index = mid;
            break;
        }
        else if (key<a[mid])
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
        
    }
    if (index == -1) 
    {
        cout << "Element not found" << '\n';
    }
    else 
    {
        cout << "Element found at index " << index << '\n';
    }
    return 0;
}