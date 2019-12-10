/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
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
const int n=100;
map<pair<int,int>,int > Size;
map<pair<int,int>,pair<int,int> > arr;
pair<int,int>root(pair<int,int>i)
{
    while(arr[i]!=i)
    {
        arr[i]=arr[arr[i]];
        i = arr[i];
    }
    return i;
}
void wu(pair<int,int>a,pair<int,int>b)
{
    pair<int,int>rta,rtb;
    rta=root(a),rtb=root(b);
    if(rta==rtb) return ;
    if(Size[rta]>Size[rtb])
    {
        arr[rtb] = arr[rta];
        Size[rta]+=Size[rtb];
    }
    else{
        arr[rta] = arr[rtb];
        Size[rtb]+=Size[rta];
    }
}
int main()
{
	IOS
    int n;
    cin>>n;
    vector<pair<int,int> > vp;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        arr[{x,y}] = mp(x,y);
        vp.pb(mp(x,y));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(vp[i].first==vp[j].first && vp[i].second==vp[j].second) continue;
            if(vp[i].first==vp[j].first || vp[i].second==vp[j].second) wu(vp[i],vp[j]);
        }
    }
    set<pair<int,int> >st;
    for(int i=0;i<n;i++)
    {
        pair<int,int>rt;
        rt = root(mp(vp[i].first,vp[i].second));
        //cout << rt.first<< " "<< rt.second<< endl;
        st.ins(root(mp(vp[i].first,vp[i].second)));
    }
    cout << st.size()-1<< endl;
    return 0;
}
///Alhamdulillah
