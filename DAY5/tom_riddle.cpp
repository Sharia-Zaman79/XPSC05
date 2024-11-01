#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_set<string>name;
    vector<string>res;
    for(int i=0;i<n;i++)
    {
        string nm;
        cin>>nm;
        if(name.find(nm)!=name.end())
        {
            res.push_back("YES");
        }
        else
        {
            res.push_back("NO");
            name.insert(nm);
        }
    }
    for(string result:res)
    {
        cout<<result<<endl;
    }
}
