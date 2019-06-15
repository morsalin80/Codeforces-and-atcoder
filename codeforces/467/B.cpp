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
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m+1];
    for(int i=0;i<m+1;i++)
    {
        cin>>arr[i];
    }
    int cnt = 0;
    int f = arr[m];
    for(int i=0;i<m;i++)
    {
        int x = f^arr[i];
        int xc=0;
        while(x)
        {
            xc+=x&1;
            x>>=1;
        }
        if(xc<=k)
            cnt++;
    }
    cout << cnt <<endl;
    return 0;
}

