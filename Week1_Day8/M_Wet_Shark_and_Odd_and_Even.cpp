#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    vector<int> nums(n);
    long long sum = 0;
    int smallestOdd = INT_MAX;
    
    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
        sum += nums[i];
        if (nums[i] % 2 != 0 && nums[i] < smallestOdd) 
        {
            smallestOdd = nums[i];
        }
    }
    
    if (sum % 2 != 0) 
    { 
        sum -= smallestOdd;
    }
    
    cout << sum << endl;
    
    return 0;
}
