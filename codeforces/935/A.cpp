#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        int ans=0;
        for(int i=1;i<n;i++)
        {
            if(n%i==0) ans++;
        }
        cout << ans <<endl;
    }
    return 0;
}

