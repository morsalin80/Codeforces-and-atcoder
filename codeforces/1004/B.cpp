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
    while(cin>>n>>m){
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
        }
        for(int i=0;i<n;i++)
        {
            if(i%2==0) cout << "0";
            else cout << "1";
        }
        cout << endl;
    }
    return 0;
}

