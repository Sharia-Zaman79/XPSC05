#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int multi=((a+c-1)/c)*c;
    if(multi<=b)
        cout<<multi<<endl;
    else
        cout<<-1<<endl;
}
