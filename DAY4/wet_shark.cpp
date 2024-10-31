#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>num(n);
    long long sum=0;
    int odd=1e9+1;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        sum+=num[i];
        if(num[i]%2!=0)
        {
            odd=min(odd,num[i]);
        }
    }
    if(sum%2!=0)
    {
        sum-=odd;
    }
    cout<<sum<<endl;
}
