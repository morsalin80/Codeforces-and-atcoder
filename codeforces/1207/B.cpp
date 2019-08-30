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
    int n,m;
    while(cin>>n>>m)
    {
        int a[n][m];
        int b[n][m];
        memset(b,0,sizeof(b[0][0])*n*m);
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++)
                cin>>a[i][j];
        }
        vector<pair<int,int> > vp;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                if(a[i][j]==0) continue;
                if(a[i][j+1]==0) continue;
                if(a[i+1][j]==0) continue;
                if(a[i+1][j+1]==0) continue;
                else
                {
                    vp.pb(mp(i+1,j+1));
                    b[i][j]=1;
                    b[i][j+1]=1;
                    b[i+1][j]=1;
                    b[i+1][j+1]=1;
                }
            }
        }
        bool yes = true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                //cout << b[i][j]<<" ";
                if(a[i][j]!=b[i][j]){
                    yes=false;
                    break;
                }
            }
            //cout << endl;
        }
        if(yes){
            cout << vp.size()<<endl;
            for(int i=0;i<vp.size();i++){
                cout << vp[i].first << " "<< vp[i].second << endl;
            }
        }
        else cout << "-1\n";
    }
    return 0;
}

