#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;

		vector<int> a(k);
		for (int i = 0; i < k; i++)
        { 
            cin >> a[i];
        }    
		sort(a.rbegin(), a.rend());

		int count = 0;
		long long sum = 0;

		while (count < a.size() && sum + n - a[count] < n)
		{
			sum += n - a[count++];
		}

		cout << count << '\n';
	}

	return 0;
}