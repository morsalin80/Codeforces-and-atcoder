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
    int n,k;
    while(cin>>n>>k)
    {
        int arr[n+1];
        arr[0] = 0;
        double mx = 0.0;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            arr[i] = arr[i-1]+x;
        }
        for(int i=1;i<=n-k+1;i++)
        {
            for(int j=i+k-1;j<=n;j++)
            {
                int dx = arr[j]- arr[i-1];
                double d = (double) dx /(double)(j-i+1);
                if(d>mx) mx = d;
            }
        }
        cout << fixed << setprecision(15) <<mx <<endl;
    }
    return 0;
}

