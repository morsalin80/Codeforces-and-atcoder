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
    int n,b;
    cin>>n>>b;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int od[n],ev[n];
    ms(od);
    ms(ev);
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            if(i==0)
            {
                ev[i]++;
                continue;
            }
            ev[i] = ev[i-1]+1;
            od[i] = od[i-1];
        }
        else
        {
            if(i==0)
            {
                od[i]++;
                continue;
            }
            ev[i] = ev[i-1];
            od[i] = od[i-1]+1;
        }
    }
    vector<int>vec;
    for(int i=0;i<n-1;i++)
    {
        int d = abs(arr[i]-arr[i+1]);
        if(d<=b){
            if(od[i]==ev[i] && ((od[n-1]-od[i])==(ev[n-1]-ev[i])))
                vec.pb(d);
        }
    }
    sort(vec.begin(),vec.end());
    int cnt=0,limit=0;
    for(int i=0;i<vec.size();i++)
    {
        limit+= vec[i];
        cnt++;
        if(limit>b)
        {
            cout << cnt-1 <<endl;
            return 0;
        }
    }
    cout << cnt <<endl;
    return 0;
}

