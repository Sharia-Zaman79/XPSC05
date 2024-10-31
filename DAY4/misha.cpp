#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    unordered_map<string,string>handle1;
    unordered_map<string,string>handle2;
    for(int i=0;i<q;i++)
    {
        string oldhan,newhan;
        cin>>oldhan>>newhan;
         string handle = handle1.find(oldhan) != handle1.end() ? handle1[oldhan] : oldhan;
        handle1[newhan]=handle;
        handle2[handle]=newhan;
        handle1.erase(oldhan);
    }
    cout<<handle2.size()<<endl;
    for(const auto &entry : handle2)
    {
        cout<<entry.first<<" "<<entry.second<<endl;
    }
    return 0;
}
