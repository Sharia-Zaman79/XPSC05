#include<bits/stdc++.h>
using namespace std;
const int maxN=(1LL<<15);
vector<int>allpalindrome;
bool isPalindrome(int x)
{
    string s=to_string(x);
    int len=s.size();
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            return false;
        }
    }
    return true;
}
void maxpalindrome()
{
    for(int i=0;i<maxN;i++)
    {
        if(isPalindrome(i))
        {
            allpalindrome.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        maxpalindrome();
        int n;
        cin>>n;
        vector<int>a(n),cnt(maxN+1);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cnt[a[i]]++;
        }
        long long ans=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<allpalindrome.size();j++)
            {
                int curr=(a[i] ^ allpalindrome[j]);
                ans+=cnt[curr];
            }
        }
        cout<<(ans/2)<<'\n';
    }
}
