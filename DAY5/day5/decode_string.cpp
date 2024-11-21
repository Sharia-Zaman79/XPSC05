#include<bits/stdc++.h>
using namespace std;
string decode(string t)
{
    string result="";
    int i=t.length()-1;
    while(i>=0)
    {
        if(t[i]=='0')
        {
            int num=(t[i-2]-'0')*10+(t[i-1]-'0');
            result+=char('a'+num-1);
            i-=3;
        }
        else
        {
            int num=t[i]-'0';
            result+=char('a'+num-1);
            i--;
        }
    }
    reverse(result.begin(),result.end());
    return result;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string t;
        cin>>t;
        cout<<decode(t)<<'\n';
    }
}
