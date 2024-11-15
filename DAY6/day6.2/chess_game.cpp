#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    double tp=x*1.0+y*0.5;
    double op=z*1.0+y*0.5;
    int rem=4-(x+y+z);
    double max_tp=tp+rem*1.0;
    if(max_tp>op)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
