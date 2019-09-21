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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        vector<int>vec;
        for(int i=1;i<n;i++)
        {
            vec.pb(arr[0]-arr[i]);
        }
        int gcd=0;
        ll tot=0;
        for(int i=0;i<vec.size();i++)
        {
            gcd = __gcd(gcd,vec[i]);
            tot+= vec[i];
        }
        cout << tot/gcd <<" ";
        cout << gcd << endl;
    }
    return 0;
}

