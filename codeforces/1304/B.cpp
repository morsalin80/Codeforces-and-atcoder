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
    int n,m;
    while(cin>>n>>m){
        string str[n];
        for(int i=0;i<n;i++)cin>>str[i];
        map<int,int>mark;
        vector<int>ls,rt;
        int pal=-1;
        for(int i=0;i<n;i++){
            bool palgot=1;
            for(int j=0,k=m-1;j<m;j++,k--){
          //      cout << str[i][j] << " "<< str[i][k] << endl;
                if(str[i][j]!=str[i][k]) {palgot=0;break;}
            }
            if(palgot) pal=i;
            if(mark[i]==1) continue;
           // cout << mark[i] << endl;
            for(int j=0;j<n;j++){
             //   cout << "vallagena\n";
                if(mark[j]==1) continue;
                if(i==j) continue;
                bool got = 1;
            //    cout << "balchal\n";
                for(int k=0,l=m-1;k<m;k++,l--){
            //        cout << str[i][k] << " "<< str[j][l] << endl;
                    if(str[i][k]!=str[j][l]){ got =0;break;}
                }
                if(got){
                    ls.push_back(i);
                    rt.push_back(j);
                    mark[i]=1;mark[j]=1;
                    break;
                }
            }
        //    cout << ls.size() << " "<< rt.size() << endl;
        }
        //cout << pal << endl;
        int ans= (rt.size()*2)*m;
        if(pal!=-1) ans+=m;
        cout << ans << endl;
        for(int i=0;i<ls.size();i++) cout << str[ls[i]];
        if(pal!=-1) cout << str[pal];
        for(int i=rt.size()-1;i>=0;i--) cout << str[rt[i]];
        cout << endl;
    }
    return 0;
}
///Alhamdulillah
