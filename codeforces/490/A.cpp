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
        vector<int>one,two,three;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==1) one.pb(i+1);
            if(x==2) two.pb(i+1);
            if(x==3) three.pb(i+1);
        }
        int mini = min(one.size(),min(two.size(),three.size()));
        cout << mini <<endl;
        for(int i=0;i<mini;i++)
        {
            cout << one[i] << " "<< two[i] << " "<<three[i] <<endl;
        }
    }
    return 0;
}

