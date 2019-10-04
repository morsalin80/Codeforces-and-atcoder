#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
	IOS
    int n,k;
    while(cin>>n>>k)
    {
        int arr[n];
        vector< pair<int,int> >vp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            vp.pb(mp(arr[i],i));
        }
        sort(vp.begin(),vp.end(),sortinrev);
        int sum = 0;
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            sum+= vp[i].first;
            ans.pb(vp[i].second);
        }
        sort(ans.begin(),ans.end());
        int pre = 0;
        cout << sum << endl;
        if(k==1){ cout << n << endl; continue;}
        for(int i=0;i<ans.size()-1;i++)
        {
            if(i==0)
                cout << (ans[i]-pre)+1 << " ";
            else
                cout << ans[i]-pre<<" ";
            pre = ans[i];
        }
        cout << (n-pre)-1 <<endl;
    }
    return 0;
}
