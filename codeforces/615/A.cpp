#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,m;
    while(cin>>n>>m)
    {
        bool bulb[m+1] = {0};
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            for(int j=0;j<x;j++)
            {
                int ind;
                cin>>ind;
                bulb[ind] = true;
            }
        }
        bool all = true;
        for(int i=1;i<=m;i++)
        {
            if(!bulb[i]){all = false;break;}
        }
        if(all) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

