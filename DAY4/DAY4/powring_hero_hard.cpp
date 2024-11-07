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
        vector<int>s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        priority_queue<int>pq;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>0)
            {
                pq.push(s[i]);
            }
            else if(!pq.empty())
            {
                sum +=pq.top();
                pq.pop();
            }
        }
        cout<<sum<<'\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

