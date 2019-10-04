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
    int n;
    while(cin>>n)
    {
        ll pre[n+1];
        ll suff[n+2];
        pre[0] = 0;
        suff[n+1] = 0;
        ll arr[n+1];
        arr[0];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            pre[i] = pre[i-1]+arr[i];
           // cout << pre[i] << " ";
        }
        //cout << endl;
        for(int i=n;i>0;i--)
        {
            suff[i] = suff[i+1]+arr[i];
           // cout << suff[i]<< " ";
        }
        ll ans = 0;
        for(int i=1,j=n;i<j;)
        {
            if(pre[i]>suff[j])
            {
                j--;
            }
            else if(pre[i]<suff[j])
            {
                i++;
            }
            else
            {
                ans=pre[i];
                i++;
                j--;
            }
        }
        cout << ans << endl;

    }
    return 0;
}

