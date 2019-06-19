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
        int arr[n];
        vector<pair<int,int> > vp;
        int cum[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            vp.pb(mp(arr[i],i));
            if(i==0)
            {
                cum[i] = arr[i];
                continue;
            }
            cum[i]=cum[i-1]+arr[i];
        }
        sort(vp.begin(),vp.end());
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            //cout << cum[i]<<"\n\n";
            if(cum[i]<=m)
            {
                vec.pb(0);
            }
            else{
                int x = cum[i];
                int cnt =0;
                for(int j=vp.size()-1;j>=0;j--)
                {
                    if(vp[j].second<i)
                    {
                        x-=vp[j].first;
                        cnt++;
                        if(x<=m)
                        {
                            vec.pb(cnt);
                            break;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout << vec[i] << " ";
        }
        cout <<endl;
    }
    return 0;
}
