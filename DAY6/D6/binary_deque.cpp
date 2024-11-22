#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<s)
        {
            cout<<-1<<endl;
            continue;
        }
        if(sum==s)
        {
            cout<<0<<endl;
            continue;
        }
        int current_sum=0,min_operations=INT_MAX;
        int l=0;
        for(int r=0;r<n;r++)
        {
            current_sum+=a[r];
            while(current_sum>s)
            {
                current_sum-=a[l++];
            }
            if(current_sum==s)
            {
                min_operations=min(min_operations,n-(r-l+1));

            }
        }
        if(min_operations==INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<min_operations<<endl;
        }
    }
}
