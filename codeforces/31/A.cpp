#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        vector<pair<int,int> > vp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            vp.pb(mp(x,i+1));
        }
        sort(vp.begin(),vp.end());
        bool pos = true;
        for(int i=2;i<n;i++)
        {
            for(int j=i-1;j>=1;j--)
            {
                for(int k=j-1;k>=0;k--)
                {
                    if(vp[i].first == (vp[j].first+vp[k].first))
                    {
                        cout << vp[i].second << " "<< vp[j].second << " "<<vp[k].second <<endl;
                        pos = false;
                        break;
                    }
                }
                if(!pos) break;
            }
            if(!pos) break;
        }
        if(pos)
        {
            cout << "-1\n";
        }
    }
    return 0;
}

