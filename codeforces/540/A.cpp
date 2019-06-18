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
        string s;
        cin>>s;
        string p;
        cin>>p;
        int cnt = 0;
        for(int i = 0;i<n;i++)
        {
            int x = s[i]-'0';
            int y = p[i]-'0';
            cnt += min(abs(x-y),(min(x,y)+10-max(x,y)));
        }
        cout << cnt <<endl;
    }
    return 0;
}

