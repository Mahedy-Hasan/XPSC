#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N, X;
    cin >> N >> X;
    
    vector<int> a(N);
    for(int i=0; i<N; i++) 
    {
        cin >> a[i];
    }

    a.erase(remove(a.begin(), a.end(), X), a.end());

    for (int value : a) 
    {
        cout << value << " ";
    }

    return 0;
}
