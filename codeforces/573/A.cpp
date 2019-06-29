#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int arr[1005*1005];
int main()
{
	IOS
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        while(arr[i]%2==0) arr[i]/=2;
        while(arr[i]%3==0) arr[i]/=3;
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i]!=arr[1])
        {
            cout <<"No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
