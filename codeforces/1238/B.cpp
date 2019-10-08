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
        int n,r;
        cin>>n>>r;
        map<int,int>mm;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mm[x]++;
            st.insert(x);
        }
        vector<int>vec;
        for(auto it = st.begin();it!=st.end();it++)
        {
            vec.pb(*it);
        }
        int w = 0;
        for(int i=vec.size()-1;i>=0;i--)
        {
            //cout << vec[i] << " "<<w << endl;
            if(vec[i]<=w) break;
            mm[vec[i]] = 0;
            w+=r;
        }
        cout << w/r << endl;
    }
    return 0;
}

