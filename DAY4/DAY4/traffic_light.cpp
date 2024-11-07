#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        if(c=='g')
        {
            cout<<0<<'\n';
            continue;
        }
        vector<int>green(2*n,-1);
        s+=s;
        int lastgreen=-1;
        for(int i=2*n-1; i>=0; i--)
        {
            if(s[i]=='g')
            {
                lastgreen=i;
            }
            green[i]=lastgreen;
        }
        int wait=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==c)
            {
                if(green[i]!=-1)
                {
                    wait=max(wait,green[i]-i);
                }
            }
        }
        cout<<wait<<'\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
