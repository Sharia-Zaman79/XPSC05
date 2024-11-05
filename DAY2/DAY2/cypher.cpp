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
        int fin[n];
        for(int i=0;i<n;i++)
        {
            cin>>fin[i];
        }
        for(int i=0;i<n;i++)
        {
            int b;
            string moves;
            cin>>b>>moves;
            int digit=fin[i];
            for(char m : moves)
            {
               if(m=='U')
               {
                    digit=(digit+9)%10;
               }
               else if(m=='D')
               {
                    digit=(digit+1)%10;
               }
            }
            cout<<digit<<" ";
        }
        cout<<endl;
    }
    return 0;
}
