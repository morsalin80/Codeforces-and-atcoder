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
        set<int>s;
        s.ins(0);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.ins(x);
        }
        cout << s.size()-1<<endl;
    }
    return 0;
}

