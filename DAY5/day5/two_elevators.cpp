#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long t1=abs(a-1);
        long long t2=abs(b-c)+abs(c-1);
        if(t1<t2)
        {
            cout<<1<<'\n';
        }
        else if(t1>t2)
        {
            cout<<2<<'\n';
        }
        else
        {
            cout<<3<<'\n';
        }
    }
}
