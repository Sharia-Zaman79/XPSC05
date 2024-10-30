#include<bits/stdc++.h>
using namespace std;
int white(const string &s)
{
    int n=s.length();
    int first_black=-1,last_black=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            if(first_black==-1)
            {
                first_black=i;
            }
            last_black=i;
        }
    }
    return (last_black-first_black+1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<white(s)<<endl;
    }
    return 0;
}
