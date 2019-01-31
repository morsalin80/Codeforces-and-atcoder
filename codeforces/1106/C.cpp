#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int j;
    ll ans=0;
    for(int i=0,j=n-1;i<j;i++,j--){
       ans+=((arr[i]+arr[j])*(arr[i]+arr[j]));
    }
    cout << ans <<endl;

    return 0;
}

