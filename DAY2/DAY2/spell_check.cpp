#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        if(n != 5)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            string st="Timur";
            sort(s.begin(),s.end());
            sort(st.begin(),st.end());
            if(s==st)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
