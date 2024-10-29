#include<bits/stdc++.h>
using namespace std;
pair<int,int>game(int n,deque<int>&card)
{
    int sereja=0,dima=0;
    bool ser_turn=true;
    while(!card.empty())
    {
        int chosen_card;
        if(card.front()>card.back())
        {
            chosen_card=card.front();
            card.pop_front();
        }
        else
        {
            chosen_card=card.back();
            card.pop_back();
        }
        if(ser_turn) sereja+=chosen_card;
        else dima+=chosen_card;
        ser_turn=!ser_turn;
    }
    return {sereja,dima};
}
int main()
{
    int n;
    cin>>n;
    deque<int>card(n);
    for(int i=0;i<n;i++)
    {
        cin>>card[i];
    }
    auto result=game(n,card);
    cout<<result.first<<" "<<result.second<<endl;
}
