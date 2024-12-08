#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        deque<long long>ans;
        for(int k=0; (1LL << k) <= n;k++)
        {
            if((n>>k)&1)
            {
                long long value=n-(1LL << k);
                if(value>0)
                {
                    ans.push_front(value);
                }
            }
        }
        ans.push_back(n);
        cout<<ans.size()<<'\n';
        for(auto val : ans)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
}
