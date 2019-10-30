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
const int maxx= 100005;
ll arr[maxx],Size[maxx];
void init()
{
    for(int i=0;i<maxx;i++)
    {
        arr[i] = i;
        Size[i] = 1;
    }
}
int root(int i)
{
    while(arr[i]!=i)
    {
        arr[i] = arr[arr[i]];
        i = arr[i];
    }
    return i;
}
void un(int a,int b)
{
    int rta=root(a),rtb=root(b);
    if(rta==rtb) return;
    if(Size[rta]<Size[rtb])
    {
        arr[rta] = arr[rtb];
        Size[rtb] += Size[rta];
    }
    else {
        arr[rtb] = arr[rta];
        Size[rta] += Size[rtb];
    }
}
int main()
{
	IOS
    ll n,m,l;
    cin>>n>>m>>l;
    ll arr2[n];
    init();
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    if(arr2[0]<=l) arr[0] = -1;
    for(int i=1;i<n;i++)
    {
        if(arr2[i]<=l){Size[i] = 0; arr[i]=-1; continue;}
        if(arr2[i-1]>l) {
            un(i,i-1);
        }
    }
    set<int>st;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-1)
           st.insert(root(i));
    }
    ll ans = st.size();
    while(m--)
    {
        int t;
        cin>>t;
        if(t==0)
        {
            cout << ans << endl;
        }
        else if(t==1)
        {
            ll p,d;
            cin>>p>>d;
            arr2[p-1]+=d;
            if(arr2[p-1]>l)
            {
                if(arr[p-1]==-1)
                {
                    arr[p-1] = p-1;
                    bool ok1= false,ok2 = false;
                    if(p-1>0 && arr2[p-2]>l){ un(p-1,p-2); ok1 = true;}
                    if(p-1<n-1 && arr2[p]>l){ un(p,p-1); ok2 = true;}
                    if(ok1 && ok2) ans--;
                    if(!ok1 && !ok2) ans++;
                }
            }
        }
    }
    return 0;
}
///Alhamdulillah
