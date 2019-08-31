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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int cnt = 0;
        int pre=arr[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>pre) cnt++;
            if(arr[i]<pre) pre = arr[i];
        }
        cout << cnt << endl;
    }
    return 0;
}

