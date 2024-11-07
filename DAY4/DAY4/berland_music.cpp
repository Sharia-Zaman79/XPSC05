#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>p(n);
        string s;
        vector<int>disliked,liked;
        for(int i=0; i<n; i++)
        {
            cin>>p[i];
        }
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                disliked.push_back(i);
            }
            else
            {
                liked.push_back(i);
            }
        }
        sort(disliked.begin(), disliked.end(), [&](int i, int j)
        {
            return p[i] < p[j];
        });
        sort(liked.begin(), liked.end(), [&](int i, int j)
        {
            return p[i] < p[j];
        });
        vector<int>q(n);
        int curr=1;
        for(int i : disliked)
        {
            q[i]=curr++;
        }
        for(int i : liked)
        {
            q[i]=curr++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
