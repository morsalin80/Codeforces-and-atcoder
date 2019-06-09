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
    ll n,k,l;
    cin>>n>>k>>l;
    ll arr[n*k];
    for(int i=0;i<n*k;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(n*k));
    ll left = arr[0];
    ll right = upper_bound(arr+1,arr+(n*k),arr[0]+l)-arr+1;
    if(right-1<n){
        cout << "0\n";
    }
    else{
        ll cnt=0;
        int arekbal=0;
        for(int i = 1;i<right;)
        {
            cnt+= arr[i-1];
            arekbal++;
            i+= min(right-i-n+arekbal , k);
        }
        cout << cnt << endl;
    }
    return 0;
}

