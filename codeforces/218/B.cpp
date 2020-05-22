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
bool mii(const int &a, const int &b){
    return a<b;
}
int main()
{
    IOS
    int n,m;
    while(cin>>n>>m){
        priority_queue<int,vector<int>,greater<int> >pq;
        priority_queue<int>poq;
        int arr[m],brr[m];
        for(int i=0;i<m;i++){
           int x;
           cin>>x;
            pq.push(x);
            poq.push(x);
        }
        int mini=0;
        for(int i=1;i<=n;i++){
            int x=pq.top();
            pq.pop();
            mini+=x;
            x--;
            if(x>0)
            pq.push(x);
            if(pq.empty())break;
        }
        int maxx=0;
        for(int i=1;i<=n;i++){
            int x =poq.top();
            poq.pop();
            maxx+=x;
            x--;
            if(x>0)
            poq.push(x);
            if(poq.empty())break;
        }
        cout << maxx << " "<< mini << endl;
    }
    return 0;
}
///Alhamdulillah
