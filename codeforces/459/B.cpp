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
    ll n;
    while(cin>>n)
    {

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int mini = arr[0];
        int maxi = arr[n-1];
        int minicnt = 0;
        int maxicnt = 0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==mini){
                minicnt++;
            }
            else
            {
                break;
            }
        }
        for(int i=n-1;i>0;i--)
        {
            if(arr[i]==maxi) maxicnt++;
            else break;
        }
        int dif = arr[n-1] - arr[0];
        ll xmax = max(maxicnt,minicnt);
        ll xmin = min(maxicnt,minicnt);
        ll times;
        if(mini == maxi) {
            times = (n*(n-1))/2;
        }
        else  times = xmax*xmin;
        cout << dif << " " << times << endl;
    }
    return 0;
}