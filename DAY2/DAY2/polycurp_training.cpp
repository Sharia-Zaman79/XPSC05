#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>contest(n);
    for(int i=0;i<n;i++)
    {
        cin>>contest[i];
    }
    sort(contest.begin(),contest.end());
    int day=0;
    for(int i=0;i<n;i++)
    {
        if(contest[i]>=day+1)
        {
            day++;
        }
    }
    cout<<day<<endl;
}
