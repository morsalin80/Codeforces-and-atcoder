#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        int arr[n];
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            vec.push_back(arr[i]-arr[i-1]-1);
        }
        sort(vec.begin(),vec.end(),greater<int>());
        ll ans = arr[n-1]-arr[0]+1;
        for(int i=0;i<vec.size() && i<k-1;i++)
        {
            ans-=vec[i];
        }
        cout << ans <<endl;
    }
    return 0;
}