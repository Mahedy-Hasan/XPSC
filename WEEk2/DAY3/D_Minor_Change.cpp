#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S,T;
    cin>>S>>T;

    int operation = 0;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != T[i])
        {
            operation++;
        }
        
    }
    cout<<operation<<endl;
    return 0;
}