#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string result=to_string(n);
    result.insert(0,4-result.length(),'0');
    cout<<result<<endl;
}
