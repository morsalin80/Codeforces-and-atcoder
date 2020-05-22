/// Bismillahir Rahmanir Rahim
/* Author: Mohammad Morsalin (aka white_space)
    Dept of ICE, NSTU
*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define ALL(v) v.begin(),v.end()
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define PI acos(-1)
#define IOS ios::sync_with_stdio(false);
using namespace std;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
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
    int n;
    while(cin>>n){
        map<int,int> mm;
        int arr[n];
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[i]=x;
            mm[x]++;
        }
        sort(arr,arr+n);
        vector<pair<int,pair<int,int> > >vp;
        for(int i=0;i<n;i++){
            int w=arr[i];
            bool got=0;
          //  cout << w << " "<< mm[w] << endl;
            if(mm[w]<=0) continue;
            for(int j=w*2;j<=7;j+=w){
                if(mm[j]>0){
                    for(int k=j*2;k<=7;k+=j){
                        if(mm[k]>0){
                            mm[k]--;
                            mm[j]--;
                            mm[w]--;
                         //   cout << w << " "<< j << " "<< k << endl;
                            vp.pb(mp(w,mp(j,k)));
                            got=1;
                            break;
                        }
                    }
                    if(got)break;
                }
            }
        }
        if(vp.size()!=n/3){cout << "-1\n";continue;}
        for(int i=0;i<(int)vp.size();i++){
            cout << vp[i].first << " "<< vp[i].second.first << " "<< vp[i].second.second << endl;
        }
    }
    return 0;
}
///Alhamdulillah
