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
    string s;
    while(cin>>n)
    {
        cin>>s;
        if(n<11){cout << 0 <<endl;continue;}
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='8') cnt++;
        }
        int ans;
        int tot=n/11;
        if(tot<=cnt) ans = tot;
        else ans = cnt;
        cout << ans <<endl;
    }
    return 0;
}

