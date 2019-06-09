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
    ll n;
    int q;
    cin>>q;
    while(q--)
    {
        cin>>n;
        int cnt =0;
        bool ok = false;
        while(n>=1)
        {
            if(n==1){ok =1 ; break;}
            cnt++;
            if(n%2==0) n/=2;
            else if(n%3==0) n = (2*n)/3;
            else if(n%5==0) n = (4*n)/5;
            else break;
        }
        if(ok) cout << cnt <<endl;
        else cout << "-1\n";
    }
    return 0;
}

