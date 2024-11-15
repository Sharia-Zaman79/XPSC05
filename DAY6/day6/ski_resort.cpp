#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long total=0;
        int len=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                len++;
            }
            else
            {
                if (len >= k)
                {
                    total += (long long)(len - k + 1) * (len - k + 2) / 2;
                }
                len = 0;
            }
        }
        if(len>=k)
        {
            total+=(long long)(len-k+1)*(len-k+2)/2;
        }
        cout<<total<<endl;
    }
    return 0;
}
