#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int n=s.length();
    int opt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i] != t[i])
        {
            opt++;
        }
    }
    cout<<opt<<endl;
}
