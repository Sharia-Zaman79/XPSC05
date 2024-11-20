#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s;
    cin>>n>>s;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0;
    long long sum=0,ans=0;
    for(int r=0;r<n;r++)
    {
        sum+=a[r];
        while(sum>=s)
        {
            ans+=(n-r);
            sum-=a[l];
            l++;
        }
    }
    cout<<ans<<'\n';
}
