#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int gcd(int a, int b) 
{
    while(b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,a,b,p,q;
	cin>>n>>a>>b>>p>>q;
	//Number of integers less than or equal to n divisible by a or b = n/a + n/b - n/(lcm(a,b))
	ll lcm = (a*b)/gcd(a,b); 
	ll na = n/a;
	ll nb = n/b;
	ll nab = n/lcm;
	cout << (na-nab)*p + (nb-nab)*q + nab*max(p,q) << "\n"; //computing directly
	return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// long long int n,a,b,p,q;
// cin>>n>>a>>b>>p>>q;

// vector<long long int> x,y;
// vector<long long int> u,v,w;
// for (long long int i = 1; i <= n; i++)
// {
    
//     if (i%a==0 && i%b==0)
//     {
//         if (p>q)
//         {
//             u.push_back(i);
//         }
//         else
//         {
//             v.push_back(i);
//         }
//     }
//     else if (i%b==0)
//     {
//         v.push_back(i);
//     }
//     else if(i%a==0)
//     {
//         u.push_back(i);
//     }
//     else
//     {
//         w.push_back(i);
//     }
          
// }

// long long int red = u.size()*p;
// long long int blue = v.size()*q;
// cout<<red+blue<<endl;

// return 0;
// }