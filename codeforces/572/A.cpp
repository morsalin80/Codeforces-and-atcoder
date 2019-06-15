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
    int na,nb;
    cin>>na>>nb;
    int k,m;
    cin>>k>>m;
    ll a[na],b[nb];
    for(int i=0;i<na;i++)
        cin>>a[i];
    for(int i=0;i<nb;i++)
        cin>>b[i];
    sort(b,b+nb,greater<int>());
    if(a[k-1]<b[m-1]){
        cout << "YES\n";
    }
    else
        cout << "NO\n";
    return 0;
}

