#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>u(n);
    unordered_map<string,int>db;
    vector<string>res;
    for(int i=0;i<n;i++)
    {
        cin>>u[i];
    }
    for(auto name : u)
    {
        if(db.find(name)==db.end())
        {
            db[name]=0;
            res.push_back("OK");
        }
        else
        {
            int cnt=++db[name];
            string new_name=name+to_string(cnt);
            while(db.find(new_name)!=db.end())
            {
                cnt=++db[name];
                new_name=name+to_string(cnt);
            }
            db[new_name]=0;
            res.push_back(new_name);
        }
    }
    for(auto r: res)
    {
        cout<<r<<endl;
    }
}
