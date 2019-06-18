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
        bool chk[n];
        ms(chk);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int x;
                cin>>x;
                if(x==1) chk[i] = 1;
                if(x==2) chk[j] = 1;
                if(x==3) {chk[i]=1;chk[j]=1;}
            }
        }
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            if(!chk[i])
                vec.pb(i+1);
        }
        cout << vec.size()<<endl;
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++)
            cout << vec[i]<< " ";
        if(!vec.empty())cout << endl;
    }
    return 0;
}

