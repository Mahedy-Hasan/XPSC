// Time Limit Exceed
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<long long int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
    
//     // Divisor Sqrt of N
//     for (int i = 0; i < n; i++)
//     {
//         vector<int> divisors;
//         for (long long int j = 1; j*j<=a[i]; j++)
//         {
//             if (a[i]%j==0)
//             {
//                 divisors.push_back(j);
//                 if ((a[i]/j)!=j)
//                 {
//                     divisors.push_back(a[i]/j);
//                 }
                
//             }
            
//         }
        
//         if (divisors.size()==3)
//         {
//             cout<<"YES"<<endl;
//         }
//         else
//         {
//             cout<<"NO"<<endl;
//         }
//     }
    
    
//     return 0;
// }


// Dont Get TLE But give Wrong Ans

// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e6+10;
// bool prime[N];

// // Precompute prime numbers using sieve algorithm
// void sieve()
// {
//     memset(prime, true, sizeof(prime));
 
//     for (int p=2; p*p<=N; p++)
//     {
//         if (prime[p] == true)
//         {
//             for (int i=p*p; i<=N; i += p)
//                 prime[i] = false;
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     sieve();

//     int n;
//     cin >> n;
//     while(n--)
//     {
//         long long x;
//         cin >> x;
//         long long sq = sqrt(x);
//         if(sq*sq == x and prime[sq])
//         {    //if x is perfect square of prime number
//             cout << "YES" << "\n";
//         }
//         else
//         {
//             cout << "NO" << "\n";
//         }
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;
bool prime[N+5];
set<long long> s;

void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(long long i = 2; i*i <= N; i++)
    {
        if(prime[i])
        {
            for(long long j=i*i; j<=N; j+=i)
                prime[j] = false;
        }
    }
    for(long long i=2; i<=N; i++)
    {
        if(prime[i])
            s.insert(i*i);  // Insert square prime in set.
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    sieve();
    
    int n;
    cin>>n;

    while(n--)
    {
        long long x;
        cin>>x;

        if(s.find(x)!=s.end())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
