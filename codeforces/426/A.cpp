#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,s;
    while(cin>>n>>s)
    {
        int arr[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        sort(arr,arr+n);
        sum -= arr[n-1];
        if(sum<=s) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

