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
    int n,v;
    while(cin>>n>>v)
    {
        int cnt = 0;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            bool got = false;
            for(int j=0;j<k;j++)
            {
                int s;
                cin>>s;
                if(s<v)
                {
                    got = true;
                }
            }
            if(got){cnt++;
            vec.pb(i+1);
            }
        }
        sort(vec.begin(),vec.end());
        cout <<cnt <<endl;
        for(int i=0;i<vec.size();i++)
        {
            cout << vec[i] <<" ";
        }
        cout <<endl;

    }
    return 0;
}

