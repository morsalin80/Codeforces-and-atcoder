#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll >div;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            div.pb(i);
            if(n/i==i)continue;
            div.pb(n/i);
        }
    }
    //for(int x: div) cout << x << " ";
    //cout <<endl;
    set<ll>st;ll l=n+1;
        for(int i=0;i<div.size();i++)
        {
            ll N=n/div[i];
            ll ans=(N*(1+(l-div[i])))/2;
            st.insert(ans);
        }
    for(auto it=st.begin();it!=st.end();it++){

        cout<<(*it)<<" ";
    }
    return 0;
}
