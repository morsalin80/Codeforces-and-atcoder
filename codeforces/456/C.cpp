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
    int n;
    cin>>n;
    ll arr[200000];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]+=x;
    }
    for(int i=2;i<=100001;i++)
    {
       // cout << arr[i-1] << " "<< arr[i-2]+arr[i] <<endl;
        arr[i] = max(arr[i-1],arr[i-2]+arr[i]);
    }
    cout << arr[100001] <<endl;
    return 0;
}
