#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<string>leaves;
    for(int i=0;i<n;i++)
    {
        string spe,col;
        cin>>spe>>col;
        leaves.insert(spe +" "+ col);
    }
    cout<<leaves.size()<<endl;
}
