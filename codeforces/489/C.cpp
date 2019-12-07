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
string small(int len,int sum)
{
    string ans;
    int l = len,s=sum;
    while(l>0)
    {
        for(int i= (l==len ? 1:0);i<=9;i++){
            if(s-i<=(l-1)*9){
                ans+=char('0'+i);
                l--;
                s-=i;
                break;
            }
        }
    }
    //cout << ans << endl;
    return ans;
}
string big(int len,int sum)
{
    string ans;
    int l = len,s=sum;
    while(l>0)
    {
        ans+=char('0'+min(9,s));
        l--;
        s-=min(9,s);
    }
    //cout << ans << endl;
    return ans;
}
int main()
{
	IOS
	///This logic was inspired from theRabiulAwal
    int m,s;
    while(cin>>m>>s)
    {
        if(s==0)
        {
            if(m==1)
            {
                printf("0 0\n");
            }
            else printf("-1 -1\n");
        }
        else{
            if(s>9*m) printf("-1 -1\n");
            else{
                cout << small(m,s)<< " "<<big(m,s)<<endl;
            }
        }
    }
    return 0;
}
///Alhamdulillah
