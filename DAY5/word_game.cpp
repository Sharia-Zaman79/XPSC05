#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string>p1(n),p2(n),p3(n);
        unordered_map<string,int>word_count;
        for(int i=0;i<n;i++)
        {
            cin>>p1[i];
            word_count[p1[i]]++;
        }
                for(int i=0;i<n;i++)
        {
            cin>>p2[i];
            word_count[p2[i]]++;
        }
                for(int i=0;i<n;i++)
        {
            cin>>p3[i];
            word_count[p3[i]]++;
        }
        int score1=0,score2=0,score3=0;
        for(string word : p1)
        {
            if(word_count[word]==1)
                score1+=3;
            else if(word_count[word]==2)
                score1+=1;
        }
                for(string word : p2)
        {
            if(word_count[word]==1)
                score2+=3;
            else if(word_count[word]==2)
                score2+=1;
        }
                for(string word : p3)
        {
            if(word_count[word]==1)
                score3+=3;
            else if(word_count[word]==2)
                score3+=1;
        }
        cout<<score1<<" "<<score2<<" "<<score3<<endl;
    }
    return 0;
}
