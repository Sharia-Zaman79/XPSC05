#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool first=true;
    for(int i=0;i<n;i++)
    {
        if(a[i] != x)
        {
            if(!first)
            {
                cout<<" ";
            }
            cout<<a[i];
            first=false;
        }
    }
    cout<<endl;
}
