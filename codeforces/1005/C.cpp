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
	ll two[50];
	ll x = 1;
	for(int i=0;i<50;i++)
    {
        two[i] = x;
        x*=2;
    }
    int n;
    while(cin>>n)
    {
        int arr[n];
        map<int,int> mym;
        for(int i = 0;i<n;i++)
        {
            int anura;
            cin>>anura;
            arr[i] = anura;
            mym[anura]++;
        }
        int cnt =0;
        for(int i=0;i<n;i++)
        {
            bool got = false;
            for(int j=0;j<50;j++)
            {
                ll z = two[j] - arr[i];
            //    cout << z << endl;
                if(z<=0) continue;
                if(arr[i]==z)
                {
                    if(mym[z]>1) {
                        got = true;
                        break;
                    }
                }
                else
                {
                    if(mym[z]>0) {
                        got = true;
                        break;
                    }
                }
            }
            if(!got) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}

