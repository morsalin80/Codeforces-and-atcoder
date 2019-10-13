/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
const long long MOD = 1000000007;
template<typename T>inline T Bigmod(T base, T power, T MOD){
    T ret=1;
    while(power)
    {
        if(power & 1)ret=(ret*base)%MOD;
        base=(base*base)%MOD;
        power>>=1;
    }
    return ret;
}

bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
	IOS
    int n,s,t;
    while(cin>>n>>s>>t){
        bool mark[n+1];
        ms(mark);
        map<int,int>mm;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            mm[i] = x;
        }
        int w = s;
        int cnt = 0;
        bool pos = false;
        while(1){
            if(mark[w]==1)
            {
                break;
            }
            mark[w] = 1;
           // cout << mark[w] << endl;
            if(w==t)
            {
                pos = true;
                break;
            }
            else
            {
                w = mm[w];
                cnt++;
            }
        }
        if(!pos) {
            cout << "-1\n";
        }
        else if(pos)
        {
            cout << cnt << endl;
        }
    }
    return 0;
}


