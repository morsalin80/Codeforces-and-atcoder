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
    }
    int x = arr[1];
    for(int i=2;i<=n;i++)
    {
        x = __gcd(x,arr[i]);
    }
    //cout << x <<endl;
    while(x%2==0) x/=2;
    while(x%3==0) x/=3;
    //cout << x <<endl;
    for(int i=1;i<=n;i++)
    {
        int a2=1,a3=1;
        while(arr[i]%(a2*2)==0) a2*=2;
        while(arr[i]%(a3*3)==0) a3*=3;
        if(x*a2*a3!=arr[i])
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
