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
        string r1,r2;
        cin>>r1>>r2;
        for(int i=0;i<n;i++)
        {
            if(r1[i]=='G'|| r1[i]=='B')
            {
                r1[i]='X';
            }
            if(r2[i]=='G'||r2[i]=='B')
            {
                r2[i]='X';
            }
        }
        if(r1==r2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
