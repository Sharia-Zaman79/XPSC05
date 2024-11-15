#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_set<string> active;
    unordered_map<string, list<string>::iterator> pos;
    list<string> order;
    for (int i = 0; i < n; i++)
    {
        string prog;
        cin >> prog;
        if (active.count(prog))
        {
            order.erase(pos[prog]);
        }
        else
        {
            active.insert(prog);
        }
        order.push_front(prog);
        pos[prog]=order.begin();
    }
    for (const string& prog : order)
    {
        cout << prog.substr(prog.size() - 2);
    }
    cout << endl;
}
