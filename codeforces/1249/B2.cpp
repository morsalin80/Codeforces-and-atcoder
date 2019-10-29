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
const int maxx = 200005;
int arr[maxx],Size[maxx];
void init()
{
    for(int i=0;i<maxx;i++){
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
void w_u(int a,int b)
{
    int rta = root(a);
    int rtb = root(b);
    //cout << rta << " "<<rtb <<endl;
    if(rta==rtb) return;
    else if(Size[rta]<Size[rtb]){
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
    int q;
    cin>>q;
    while(q--)
    {
        init();
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            w_u(i,x);
        }
        for(int i=1;i<=n;i++)
        {
            int rt = root(i);
            cout << Size[rt] <<" ";
        }
        cout << endl;
    }
    return 0;
}
///Alhamdulillah
