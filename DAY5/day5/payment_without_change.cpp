#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
        long long used_n=min(a,s/n)*n;
        long long rem=s-used_n;
        if(rem<=b)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
