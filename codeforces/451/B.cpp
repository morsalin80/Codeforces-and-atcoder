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
    int n;
    while(cin>>n)
    {
        ll arr[n];
        vector<pair<ll,int>> vp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            vp.pb(mp(arr[i],i));
        }
        sort(vp.begin(),vp.end());
        vector<ll>vec;
        map<ll,ll>mm;
        for(int i=0;i<n;i++)
        {
            if(i!=vp[i].second){
                vec.pb(vp[i].second);
                mm[vp[i].second]++;
            }
        }
        if(vec.size()==0){
            cout << "yes\n1 1\n";
            continue;
        }
        bool pos = true;
        for(int i=vec[vec.size()-1],j=vec[0];i<j;i++,j--)
        {
            //cout << arr[i] << " " << arr[j] << endl;
            ll temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        for(int i=0;i<n;i++)
        {
            //cout << arr[i] << " ";
            if(arr[i]!=vp[i].first){
                pos = false;
                break;
            }
        }
        if(pos){
            cout << "yes\n";
            cout <<vec[vec.size()-1]+1<<" "<<vec[0]+1<<  endl;
        }
        else
            cout <<"no\n";
    }
    return 0;
}
