#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
const long long MOD = 1000000007;
template<typename T>inline T Bigmod(T base, T power, T MOD){
    T ret=1;
    while(power)
    {
        if(power & 1)ret=(ret*base)%MOD;
        base=(base*base)%MOD;
        power>>=1;
    }
    return ret;
}

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
        bool mark[10005];
        ms(mark);
        map<int,int>mm;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mm[arr[i]]++;
            mark[arr[i]]=1;
        }
        int ans = 0;
        mark[0] = 1;
        for(int i=0;i<n;i++)
        {
 //           cout << mm[arr[i]] <<endl;
            if(mm[arr[i]]>1)
            {
                for(int j=arr[i]+1;;j++)
                {
                    if(mark[j]==0)
                    {
                        int temp = abs(arr[i]-j);
                        mark[j] = 1;
                        ans+=temp;
                        break;
                    }
                }
                mm[arr[i]]--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
