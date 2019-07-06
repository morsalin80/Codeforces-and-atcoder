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
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        arr[0] = 0;
        for(int i=1;i<=n;i++)
        {
            arr[i] = arr[i-1]+arr[i];
        }
        int q;
        cin>>q;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            cout << (arr[r] - arr[l-1])/10 <<endl;
        }
    }
    return 0;
}
