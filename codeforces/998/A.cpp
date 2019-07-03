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
        set<int> st;
        vector<pair<int,int> >vp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            st.ins(x);
            vp.pb(mp(x,i+1));
        }
        sort(vp.begin(),vp.end());
        if(n==1)
            cout << "-1\n";
        else if(st.size()==1 && n==2)
            cout << "-1\n";
        else
        {
            cout << "1\n";
            cout << vp[0].second <<endl;
        }
    }
    return 0;
}

