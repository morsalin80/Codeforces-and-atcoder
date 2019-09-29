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
    int l,r;
    while(cin>>l>>r)
    {
        bool allok = false;
        int ans ;
        for(int i=l;i<=r;i++)
        {
            int w = i;
            int arr[10];
            ms(arr);
            while(w>0)
            {
                arr[w%10]++;
                w/=10;
            }
            bool ok = true;
            for(int i=0;i<10;i++)
            {
                if(arr[i]>=2)
                {
                    ok = false;
                    break;
                }
            }
            if(ok) { ans = i; allok = true;break;}
        }
        if(allok) {cout << ans << endl;}
        else
            cout << "-1\n";
    }
    return 0;
}

