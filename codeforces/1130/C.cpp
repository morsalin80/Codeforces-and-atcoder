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
const int maxx = 55;
map<pair<int,int>,int > Size;
map<pair<int,int> , pair<int,int> > mm;
pair<int,int> root(pair<int,int> rc)
{
    while(mm[rc]!=rc){
        mm[rc] = mm[mm[rc]];
        rc = mm[rc];
    }
    return rc;
}
void un(pair<int,int>rc1,pair<int,int>rc2)
{
    pair<int,int> rtrc1 = root(rc1);
    pair<int,int> rtrc2 = root(rc2);

    if(rtrc1==rtrc2) return;
    if(Size[rtrc1]<Size[rtrc2])
    {
        mm[rtrc2] = mm[rtrc1];
        Size[rtrc1]+=Size[rtrc2];
    }
    else
    {
        mm[rtrc1] = mm[rtrc2];
        Size[rtrc2] += Size[rtrc1];
    }
}
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        for(int i=0;i<maxx;i++){
            for(int j=0;j<maxx;j++)
            {
                mm[{i,j}] = mp(i,j);
                Size[{i,j}] = 1;
            }
        }
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        r1--,c1--,r2--,c2--;
        string s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i][j]=='1'){
                    continue;
                }
                if(i>0 && s[i-1][j]=='0'){un(mp(i,j),mp(i-1,j));}
                if(i<n-1 && s[i+1][j]=='0') {un(mp(i,j),mp(i+1,j));}
                if(j<n-1 && s[i][j+1]=='0') {un(mp(i,j),mp(i,j+1));}
                if(j>0 && s[i][j-1] =='0') {un(mp(i,j),mp(i,j-1));}
            }
        }
        pair<int,int> rtc1,rtc2;
        rtc1 = root(mp(r1,c1));
        rtc2 = root(mp(r2,c2));
        if(rtc1 == rtc2) {cout << "0\n"; continue;}
        vector<pair<int,int>>vp1,vp2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                pair<int,int> rtc,rc;
                rc = mp(i,j);
                rtc = root(rc);
                if(rtc == rtc1) vp1.pb(rc);
                if(rtc == rtc2) vp2.pb(rc);
            }
        }
        int mini = 10000;
        for(int i=0;i<vp1.size();i++)
        {
            int rr1 = vp1[i].first,cc1 = vp1[i].second;
            //cout << rr1 << " "<< cc1 << endl;
            for(int j=0;j<vp2.size();j++)
            {
                int rr2 = vp2[j].first,cc2 = vp2[j].second;
                //cout << ">>>> "<< rr2 << " "<< cc2 << endl;
                int ans = ((rr1-rr2)*(rr1-rr2))+((cc1-cc2)*(cc1-cc2));
                mini = min(ans,mini);
            }
        }
        cout << mini << endl;
    }
    return 0;
}
///Alhamdulillah
