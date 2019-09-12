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
        int brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            brr[i] = arr[i];
        }
        sort(arr,arr+n,greater<int>());
        int maxx = arr[0];
        int mini = arr[n-1];
        int xmin,xmax;
        for(int i=0;i<n;i++)
        {
            if(brr[i]==mini) xmin = i;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(brr[i]==maxx) xmax = i;
        }
        int ans = ((n-1)-xmin) + (xmax);
        if(xmin<xmax) ans--;
        cout << ans << endl;
    }
    return 0;
}

