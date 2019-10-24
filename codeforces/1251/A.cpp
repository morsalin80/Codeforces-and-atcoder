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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(i<s.size()-1){
                if(s[i]!=s[i+1] && s[i]!='.')
                {
                    st.ins(s[i]);
                }
                else if(i<s.size()-1 && s[i]==s[i+1])
                {
                    s[i+1] = '.';
                }
            }
            else if(s[i]!='.')
                st.ins(s[i]);

        }
        for(auto it=st.begin();it!=st.end();it++)
            cout << *it;
        cout << endl;
    }
    return 0;
}
///Alhamdulillah
