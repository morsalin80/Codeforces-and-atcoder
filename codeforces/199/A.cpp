#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    ll n;
    while(cin>>n){
    ll beg=0,pre=1,now;
    vector<int> vec;
    if(n==0){ cout << "0 0 0\n";continue;}
    vec.pb(0);vec.pb(1);
    while(1)
    {
        now = beg+pre;
        vec.pb(now);
        if(now==n) break;
        beg = pre; pre =now;
    }
    if(n==2) cout << "0 1 1\n";
    else if(n==1) cout << "0 0 1\n";
    else if(n==3) cout << "1 1 1\n";

    else{
        int sz  = vec.size();
        cout  << vec[sz-5]<< " " << vec[sz-4] << " " << vec[sz-2] <<endl;
    }
    }
    return 0;
}

