#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<bool>present(26,false);
    for(char ch:s)
    {
        present[ch-'a']=true;
    }
    for(int i=0;i<26;i++)
    {
        if(!present[i])
        {
            cout<<char(i+'a')<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
}
