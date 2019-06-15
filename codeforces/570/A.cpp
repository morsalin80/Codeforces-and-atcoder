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
        vector<pair<int,int> >vp;
        for(int i=0;i<n;i++)
        {
            vp.pb(mp(0,i));
        }
        int bair[n];
        ms(bair);
        for(int i=0;i<m;i++)
        {
            int mx=-1;
            int arr[n];
            for(int j=0;j<n;j++)
            {
                int c;
                cin>>c;
                arr[j] = c;
                if(mx<c) mx = c;
            }
            for(int j=0;j<n;j++)
            {
                if(arr[j]==mx)
                {
            //        cout << j+1 <<endl;
                    bair[j]++;
                    break;
                }
            }
        }
        int mx = -1;
        for(int i=0;i<n;i++)
        {
          //  cout << bair[i]<<endl;
            if(bair[i]>mx) mx = bair[i];
        }
        //cout << mx <<endl;
        for(int i=0;i<n;i++)
        {
            if(bair[i]==mx)
            {
                cout << i+1 <<endl;
                break;
            }
        }
    }
    return 0;
}

