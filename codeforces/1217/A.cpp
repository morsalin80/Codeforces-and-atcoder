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
        ll str,in,ex;
        cin>>str>>in>>ex;
        int lo=1,high = ex,mid;
        int ans = -1;
        for(int i=1;i<=64;i++)
        {
            mid = (lo+high)/2;
            int r = ex - mid;
            if((str+mid)>(in+r)){
                ans = mid;
                high = mid -1;
            }
            else
                lo = mid+1;

        }
        if(ans==-1) cout << "0\n";
        else
        cout << ex-ans+1 <<endl;
    }
    return 0;
}
