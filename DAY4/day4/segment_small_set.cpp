#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int>freq;
    int l=0;
    long long cnt=0;
    int uni=0;
    for(int r=0; r<n; r++)
    {
        if(freq[a[r]]==0)
        {
            uni++;
        }
        freq[a[r]]++;
        while (uni > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
            {
                uni--;
            }
            l++;
        }
        cnt+=(r-l+1);
    }
    cout<<cnt<<endl;
}
