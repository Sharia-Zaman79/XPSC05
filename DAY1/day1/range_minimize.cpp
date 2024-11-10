#include<bits/stdc++.h>
using namespace std;
int range(vector<int>&a,int n)
{
    sort(a.begin(),a.end());
    int c1=a[n-3]-a[0];
    int c2=a[n-1]-a[2];
    int c3=a[n-2]-a[1];
    int c4=a[n-1]-a[2];
    return min({c1,c2,c3,c4});
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n<=3)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<range(a,n)<<"\n";
        }
    }
    return 0;
}
