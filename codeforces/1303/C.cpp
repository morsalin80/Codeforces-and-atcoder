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
    while(t--){

        string s;
        cin>>s;
        int chk[26];
        ms(chk);
        string st="";
        chk[s[0]-'a']=1;
        st.pb(s[0]);
        bool pos=1;
        int wx=-1;
        for(int i=1;i<(int)s.size();i++){
                //cout << st << endl;
            if(chk[s[i]-'a']==0)
            {
                chk[s[i]-'a']=1;
                for(int j=0;j<(int)st.size();j++){
                    if(s[i-1]==st[j]){
                        wx = j;
                    }
                }
                if(wx==(int)st.size()-1){
                    st+=s[i];
                }
                else st = s[i]+st;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(chk[i]==0)
            {
                st+= (i+'a');
            }
        }
        for(int i=0;i<(int)st.size();i++){
            if(s[0]==st[i]){

                wx = i;
            }
        }
        for(int i=1; i<(int)s.size(); i++)
        {
            if(wx+1<st.size() && st[wx+1]==s[i])
                wx++;
            else if(wx-1>=0 && st[wx-1]==s[i])
                wx--;
            else
            {
                pos=false;
                break;
            }
        }
        if(pos){
            cout << "YES\n";
            cout << st << endl;
        }
        else cout << "NO\n";
    }
    return 0;
}
///Alhamdulillah
