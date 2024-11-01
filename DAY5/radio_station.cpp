#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    unordered_map<string,string>ipname;
    for(int i=0;i<n;i++)
    {
        string name,ip;
        cin>>name>>ip;
        ipname[ip]=name;
    }
    for(int i=0;i<m;i++)
    {
        string cmd,ipsemi;
        cin>>cmd>>ipsemi;
        string ip=ipsemi.substr(0,ipsemi.size()-1);
        cout<<cmd<<" "<<ipsemi<<" #"<<ipname[ip]<<endl;
    }
}
