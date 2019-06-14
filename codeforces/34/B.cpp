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
        vector<int>vec;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x<0){
                vec.pb(x);
                sum+=x;
            }
        }
        sort(vec.begin(),vec.end());
        if(m>vec.size()) cout << sum*(-1)<<endl;
        else
        {
            sum=0;
            for(int i=0;i<m;i++)
            {
                sum+=vec[i];
            }
            sum*=-1;
            cout << sum <<endl;
        }
    }
    return 0;
}

