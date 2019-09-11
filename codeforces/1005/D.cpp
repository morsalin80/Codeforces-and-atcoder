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
        int ss = s.size();
        int r=0;
        vector<int> xx(3,-1);
        xx[0] = 0;
        vector<int>w(ss+1);
        for(int i=1;i<=ss;i++)
        {
            r = (r+ s[i-1]-'0')%3;
            w[i]=w[i-1];
            if(xx[r]!=-1)
            {
                w[i] = max(w[i],w[xx[r]]+1);
            }
            xx[r] = i;
        }
        cout << w[ss] << endl;
    }
    return 0;
}

