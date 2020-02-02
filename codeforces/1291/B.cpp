/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool got1=1,got2=1;
        int last;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<i) {
                got1=0;
                last =i-1;
                break;
            }
        }
        if(got1){cout << "Yes\n";continue;}
        bool gott=1;
       // cout << last << endl;
        int cnt=0;
        for(int i=n-1;i>=last;i--)
        {
            //cout << arr[i] << " "<< cnt << endl;
            if(arr[i]<cnt){
                gott=0;
                break;
            }
            cnt++;
        }
        if(gott) {cout << "Yes\n";continue;}
        for(int i=0;i<n;i++)
        {
            if(arr[i]<n-i-1) {
                got2=0;
                break;
            }
        }
        if(got2){cout << "Yes\n";continue;}
        else cout << "No\n";
    }
    return 0;
}
///Alhamdulillah
