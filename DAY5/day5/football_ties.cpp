#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int wina=x/3;
        int winb=y/3;
        int lefta=x%3;
        int leftb=y%3;
        int mindraw=max(lefta,leftb);
        cout<<mindraw<<endl;
    }
}
