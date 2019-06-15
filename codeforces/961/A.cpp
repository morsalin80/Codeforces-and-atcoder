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
    cin>>n>>m;
    vector<int> cnt(n);
    for(int i=0;i<m;i++)
    {
        int c;
        cin>>c;
        cnt[c-1]++;
    }
    cout << *min_element(cnt.begin(),cnt.end());
    return 0;
}

