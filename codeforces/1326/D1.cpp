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
bool isPalindrome(string s){
    string t;
    t=s;
    reverse(t.begin(),t.end());
    return (s==t);
}
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        int n=s.size();
        if(n==1) {cout << s << endl;continue;}
        int suf=n,pre=0;
        for(int i=0,j=n-1;i<j;i++,j--){
            if(s[i]!=s[j]){
                suf=j+1;
                pre=i;
               // cout << suf << endl;
                break;
            }
        }
       // cout << suf << endl;
        string suffix=s.substr(suf);
        //cout << prefix << endl;
        string best="";
        string palchk=s.substr(n-suf,suf-(n-suf));
        for(int i=0;i<(int)palchk.size();i++){
            string x=palchk.substr(0,i+1);
            string y=palchk.substr(i,(int)palchk.size()-i);
            if(isPalindrome(x) && (int)best.size()<(int)x.size()){
                best=x;
            }
            if(isPalindrome(y) && (int)best.size()<(int)y.size()){
                best = y;
            }
        }
        string prefix=suffix;
        reverse(prefix.begin(),prefix.end());
        cout << prefix << best << suffix <<endl;
    }
    return 0;
}
///Alhamdulillah
