#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string S;
  cin >> S;

  set<char> letters;

  
  for (char c : S) 
  {
    letters.insert(c);
  }

  
  for (char c = 'a'; c <= 'z'; c++) 
  {
    if (letters.find(c) == letters.end()) 
    {
      cout << c << endl;
      return 0;
    }
  }

  cout << "None" << endl;
  return 0;
}
