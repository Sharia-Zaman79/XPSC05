#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int mx=max(a,b);
    int same=mx+(mx-1);
    int diff=a+b;
    int mx_coin=max(same,diff);
    cout<<mx_coin<<endl;
}
