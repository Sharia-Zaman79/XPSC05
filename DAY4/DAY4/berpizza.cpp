#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int q;
    cin>>q;
    queue<pair<int,int>> ordQ;
    priority_queue<pair<int,int>>maxH;
    unordered_set<int>srvd;
    int idx=0;
    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int m;
            cin>>m;
            idx++;
            ordQ.push({idx,m});
            maxH.push({m,-idx});
        }
        else if(t==2)
        {
            while(!ordQ.empty())
            {
                auto[i,m]=ordQ.front();
                ordQ.pop();
                if(srvd.find(i)==srvd.end())
                {
                    srvd.insert(i);
                    cout<<i<<" ";
                    break;
                }
            }
        }
        else if(t==3)
        {
            while(!maxH.empty())
            {
                auto[m,ni]=maxH.top();
                int i=-ni;
                maxH.pop();
                if(srvd.find(i)==srvd.end())
                {
                    srvd.insert(i);
                    cout<<i<<" ";
                    break;
                }
            }
        }
    }
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
