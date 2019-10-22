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
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n];
        map<int,int>mm;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mm[i+1] = arr[i];
        }
        vector<int> vec;
        for(int i=1;i<=n;i++)
        {
            int cnt = 1;
            int x = i;
            while(1)
            {
                if(mm[x]==i) {
                    break;
                }
                x = mm[x];
                //cout << x << endl;
                cnt++;
            }
            vec.pb(cnt);
        }
        for(int i=0;i<n;i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

