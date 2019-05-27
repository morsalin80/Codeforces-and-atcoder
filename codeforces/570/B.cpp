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
    int n,m;
    while(cin>>n>>m)
    {
        if(n==1){ cout << 1 <<endl;continue;}
        if(n-m>m-1) cout << m+1 <<endl;
        else cout << m-1<<endl;
    }
    return 0;
}

