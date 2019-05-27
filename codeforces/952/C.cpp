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
        f0(n) cin>> arr[i];
        bool chk = true;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=arr[i-1]+2) {chk = false; break;}
            else if(arr[i]+2<=arr[i-1]){chk = false; break;}
        }
        if(chk) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

