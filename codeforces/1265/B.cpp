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
        int arr[n];
        map<int,int>ind;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            ind[arr[i]] = i+1;
        }
        int l,r;
        l = ind[1];
        string s;
        s.pb('1');
        if(n>1){
            int in = ind[2];
            if(in>l)r = in;
            else {r = l; l=in;}
            if((r-l)<=1)s.pb('1');
            else s.pb('0');
        }
        //cout << s << endl;
        for(int i=3;i<=n;i++)
        {
           //cout << i << " i::l "<< l << " l::r "<< r << endl;
            int in = ind[i];
            if(in<l){
                if((r-in)<i)
                {
                    s.pb('1');
                }
                else{
                    s.pb('0');
                }
                l=in;
            }
            else if(in>r)
            {
                if((in-l)<i){
                    s.pb('1');
                }
                else {
                    s.pb('0');
                }
                r=in;
            }
            else{
                if((r-l)<i)
                s.pb('1');
                else
                    s.pb('0');
            }
        }
        cout << s << endl;
    }
    return 0;
}
///Alhamdulillah
