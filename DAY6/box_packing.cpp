#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<int,int>boxcount;
    for(int i=0;i<n;i++)
    {
        int sz;
        cin>>sz;
        boxcount[sz]++;
    }
    int mxcnt=0;
    for(auto entry :boxcount)
    {
        mxcnt=max(mxcnt,entry.second);
    }
    cout<<mxcnt<<endl;
}
