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
    int n;
    while(cin>>n)
    {
        int m[367],f[367];
        ms(m);
        ms(f);
        for(int i=0;i<n;i++)
        {
            char x;
            int a,b;
            cin>>x>>a>>b;
            if(x=='F'){
            for(int i=a;i<=b;i++)
            {
               f[i]++;
            }
            }
            else if(x=='M')
            {
                for(int i=a;i<=b;i++)
                {
                    m[i]++;
                }
            }
        }
        int ans = 0;
        for(int i=1;i<=366;i++)
        {
           // if(m[i]>0 || f[i]>0) cout << i << " :: "<< m[i] << " "<< f[i] <<endl;
            ans = max(ans,min(m[i],f[i]));
        }
        cout << ans*2<<endl;
    }
    return 0;
}

