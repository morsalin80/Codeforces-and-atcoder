/// Bismillahir Rahmanir Rahim

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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        map<string,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        int cnt =0;
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]>1)
            {
                m[arr[i]]--;
                bool got = false;
                for(int k=0;k<4;i++){
                    for(int j=0;j<=9;j++){
                        arr[i][k] = j+48;
                        if(m[arr[i]]==0)
                        {
                            m[arr[i]]++;
                            cnt++;
                            got = 1;
                            break;
                        }
                    }
                    if(got) break;
            }
        }
        }
        cout << cnt << endl;
        for(int i=0;i<n;i++)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}
///Alhamdulillah
