#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>div;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            div.push_back(i);
            if((n/i)!=i)
            {
                div.push_back(n/i);
            }
        }
    }
    sort(div.begin(),div.end());
    if(div.size()<k)
    {
        cout<<-1<<'\n';
    }
    else
    {
        cout<<div[k-1]<<'\n';
    }
}
