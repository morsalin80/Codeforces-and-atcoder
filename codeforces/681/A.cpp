#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
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
        int cond = 0;
        for(int i=0;i<n;i++)
        {
            string n;
            int b,a;
            cin>>n>>b>>a;
            if(b>=2400 && a>b) cond++;
        }
        if(cond>0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

