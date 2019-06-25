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
	cin.tie(0);
    ll a,b;
    cin>>a>>b;
    set<ll>s1,s2;
    for(int i=1;i<=sqrt(a);i++)
    {
        if(a%i==0){
            s1.ins(i);
            s1.ins(a/i);
        }
    }
    for(int i=1;i<=sqrt(b);i++)
    {
        if(b%i==0)
        {
            s2.insert(i);
            s2.ins(b/i);
        }
    }
    set<int>intrsct;
    set<int>::iterator it;
    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(intrsct,intrsct.begin()));
    ll n = intrsct.size();
    ll arr[n];
    int i;
    for(i=0,it=intrsct.begin();i<n;i++,it++)
    {
        arr[i]= *it;
        //cout << arr[i] << endl;
    }
    //cout << "\n\n\n\n";
    int q;
    cin>>q;
    while(q--)
    {
        ll h,l;
        cin>>l>>h;
        //cout << upper_bound(arr,arr+n,h)-arr-1 << " " << arr[upper_bound(arr,arr+n,h)-arr-1] <<endl;
        ll f = arr[upper_bound(arr,arr+n,h)-arr-1];
        ll ff = arr[lower_bound(arr,arr+n,h)-arr-1];
        if(f>=l && f<=h)
        {
            cout << f << "\n";
        }
        else if(ff>=l && ff<=h)
        {
            cout << ff <<"\n";
        }
        else
            cout << "-1\n";
    }
    return 0;
}
