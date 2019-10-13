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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        if(s[0]=='1' || s[n-1]=='1') {
            cout << 2*n <<endl;
            continue;
        }
        else{
            int r=-1,l=-1;
            for(int i=0;i<n;i++){
                if(s[i]=='1') {l = i; break;}
            }
            for(int i=n-1;i>=0;i--)
            {
                if(s[i]=='1'){ r = i+1; break;}
            }
            if(l==-1 || r==-1)
                cout << n << endl;
            else
            {
                int x = max(n-l,r);
                cout << 2*x << endl;
            }
        }
    }
    return 0;
}

