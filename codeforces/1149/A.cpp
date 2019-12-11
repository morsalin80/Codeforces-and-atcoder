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
const int maxn=400005;
bool prime[400005];
void seive()
{
    int lim=sqrt(maxn);
    prime[1]=1;
    for(int i=4;i<=maxn;i+=2)
    {
        prime[i]=1;
    }
    for(int i=3;i<=lim;i++){
        if(prime[i]==0)
        {
            for(int j=i*i;j<=maxn;j+=i)
            {
                prime[j]=1;
            }
        }
    }
}
int main()
{
	IOS
    int n;
    seive();
    cin>>n;
    int one=0,two=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
            one++;
        else two++;
    }
    vector<int>vec;
    if(two>0){ vec.pb(2); two -=1;}
    if(one>0){ vec.pb(1); one--;}
    while(two>0)
    {
        vec.pb(2);
        two--;
    }
    while(one>0)
    {
        vec.pb(1);
        one--;
    }
    for(int i=0;i<vec.size();i++)
        cout << vec[i] << " ";
    cout << endl;
    return 0;
}
///Alhamdulillah
