#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        int spec=3;
        int winner,loser;
        bool pos = true;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(!pos) continue;
            if(x==spec)
            {
                pos = false;
            }
            else
            {
                if(x==1 && spec == 2)
                    spec = 3;
                else if(x==1 && spec==3)
                    spec = 2;
                else if(x==2 && spec==1)
                    spec = 3;
                else if(x==2 && spec == 3)
                    spec = 1;
                else if(x==3 && spec == 1)
                    spec = 2;
                else if(x==3 && spec ==2)
                    spec = 1;
            }
        }
        if(pos) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

