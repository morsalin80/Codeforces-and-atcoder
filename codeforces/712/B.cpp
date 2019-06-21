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
    string s;
    while(cin>>s)
    {
        int u=0,r=0,d=0,l=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R') r++;
            if(s[i]=='L') l++;
            if(s[i]=='U') u++;
            if(s[i]=='D') d++;
        }
        int mini = min(abs(d-u),abs(r-l));
        int maxx = max(abs(d-u),abs(r-l));
        int ans = 0;
        maxx -=mini;
        if(maxx%2==0)
        {
            cout << mini+(maxx/2) <<endl;
        }
        else
            cout << "-1\n";
    }
    return 0;
}

