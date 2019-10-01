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
        map<int,int>same;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            same[x]++;
        }
        int occ = 0;
        for(auto it=same.begin();it!=same.end();it++)
        {
            if(it ->second>occ) occ = it ->second;
        }
        cout << n-occ << endl;
    }
    return 0;
}

