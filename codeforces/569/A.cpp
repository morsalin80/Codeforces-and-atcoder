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
    int t,s,q;
    cin>>t>>s>>q;
    int cnt = 0;
    while(s<t)
    {
        s*=q;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}

