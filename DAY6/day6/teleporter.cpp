#include<bits/stdc++.h>
using namespace std;
int teleport(int n,int c,const vector<int>& a)
{
    vector<int>cost(n);
    for(int i=0;i<n;i++)
    {
        cost[i]=(i+1)+a[i];
    }
    sort(cost.begin(),cost.end());
    int cnt=0;
    for(int co:cost)
    {
        if(c>=co)
        {
            c-=co;
            cnt++;
        }
        else
        {
            break;
        }
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<teleport(n,c,a)<<'\n';
    }
}

