#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(string pat, string txt)
    {
        int n=txt.size();
        int m=pat.size();
        if(m>n) return 0;
        vector<int>patfreq(26,0),windowfreq(26,0);
        for(int i=0; i<m; i++)
        {
            patfreq[pat[i]-'a']++;
            windowfreq[txt[i]-'a']++;
        }
        int count=0;
        if(patfreq==windowfreq) count++;
        for(int i=m; i<n; i++)
        {
            windowfreq[txt[i]-'a']++;
            windowfreq[txt[i-m]-'a']--;
            if(patfreq==windowfreq) count++;
        }
        return count;
    }

};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~" << "\n";
    }
    return 0;
}

