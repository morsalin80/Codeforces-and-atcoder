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
	int q;
	cin>>q;
	while(q--)
    {
        int n;
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        int ans = sum/n;
        if(ans*n!=sum) ans++;
        cout << ans <<endl;
    }
    return 0;
}

