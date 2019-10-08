#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
	IOS
    ll arr[3];
    while(cin>>arr[0]>>arr[1]>>arr[2]){
        ll sum = arr[0]+arr[1]+arr[2];
        sort(arr,arr+3);
        cout << min(sum/3 ,sum-arr[2])<<endl;

    }
    return 0;
}

