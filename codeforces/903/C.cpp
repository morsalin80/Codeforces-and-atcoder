#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        int arr[n];
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        vector<int>vec;
        for(auto it=m.begin();it!=m.end();it++)
        {
           // cout << it->first << " "<< it->second << endl;
            vec.pb(it->second);
        }
        sort(vec.begin(),vec.end());
        int ans = vec[vec.size()-1];
        cout << ans << endl;
    }
    return 0;
}

