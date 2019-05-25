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
    int n,m;
    while(cin>>n>>m)
    {
        int k = n;
        int cnt=0;
        while(k/m>0)
        {
            //cout << "geche\n";
            cnt+= k/m;
            int bak=k%m;
            //cout << cnt <<"\n";
            k/=m;
            k+=bak;
            //cout << k <<endl;
        }
        cout << n+cnt<<endl;
    }
    return 0;
}

