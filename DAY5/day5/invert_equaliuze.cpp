#include<bits/stdc++.h>
using namespace std;
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
        int zero=0,one=0;
        for(int i=0;i<n;i++)
        {
            if(i==0 || s[i] != s[i-1])
            {
                if(s[i]=='0') zero++;
                else one++;
            }
        }
        cout<<min(zero,one)<<endl;
    }
    return 0;
}
