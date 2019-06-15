#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        ll sum = 0;
        vector<ll>vec;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x%2==0) sum+=x;
            else
                vec.pb(x);
        }
        int x;
        if(vec.size()%2==0) x=vec.size();
        else
            x = vec.size()-1;
        sort(vec.begin(),vec.end(),greater<int>());
        for(int i=0;i<x;i++)
            sum+=vec[i];
        cout << sum <<endl;
    }
    return 0;
}

