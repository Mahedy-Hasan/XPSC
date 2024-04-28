#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) 
    {
        cin >> a[i];
    }

    long long sum = 0; 
    for (int num : a) 
    {
        sum += num;
    }

    long long expectedSum = (long long)n * (n + 1) / 2;  
    int missingEP = expectedSum - sum;
    cout << missingEP << endl;

    return 0;
}
