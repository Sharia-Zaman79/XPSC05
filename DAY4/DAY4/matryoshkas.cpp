
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
        map<int,int>count;
        for(int i=0; i<n; i++)
        {
            int size;
            cin>>size;
            count[size]++;
        }
        int min_set=0;
        int on_set=0;
        for(auto it=count.begin();it!=count.end();it++)
        {
            if(it==count.begin() || it->first != prev(it)->first +1)
            {
                min_set+=it->second;
                on_set=it->second;
            }
            else
            {
                if(it->second > on_set)
                {
                    min_set+=it->second-on_set;
                }
                on_set=it->second;
            }
        }
        cout<<min_set<<'\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
