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
    string s,t;
    while(cin>>s>>t)
    {
        int ss,ts;
        ss = s.size();
        ts = t.size();
        int mini = min(ss,ts);
        int i,j;

        int cnt = 0;
        for(i=ss-1,j=ts-1;i>=0 && j>=0 ; i--,j--,cnt++)
        {
         //   cout << s[i] << " "<< t[j] << endl;
            if(s[i]!=t[j]) break;
        }
       // cout << cnt << endl;
        cout << (ss-cnt) + (ts-cnt) << endl;
    }
    return 0;
}

