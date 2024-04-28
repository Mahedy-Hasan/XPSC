#include<bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) 
    {
        int n;
        cin >> n;
        vector<string> words[3];
        map<string, int> wordCount;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < n; j++) 
            {
                string word;
                cin>>word;
                words[i].push_back(word);
                wordCount[word]++;
            }
        }
        
        int scores[3] = {0};
        for(int i = 0; i < 3; i++) 
        {
            for(int j = 0; j < n; j++) 
            {
                if(wordCount[words[i][j]] == 1)
                    scores[i] += 3;
                else if(wordCount[words[i][j]] == 2)
                    scores[i] += 1;
            }
        }
        
        for(int i = 0; i < 3; i++) 
        {
            cout << scores[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
