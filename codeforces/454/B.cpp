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
    int n;
    while(cin>>n)
    {
        int arr[n];
        int sarr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sarr[i] = arr[i];
        }
        sort(sarr,sarr+n);
        vector<int>sec1,sec2;
        bool sec1_on = true,pos=true;
        for(int i=0;i<n;i++)
        {
            if(i==0){
                sec1.pb(arr[i]);
                continue;
            }
            if(sec1_on)
            {
                if(arr[i]>=arr[i-1])
                    sec1.pb(arr[i]);
                else
                {
                    sec1_on = false;
                    sec2.pb(arr[i]);
                }
            }
            else{
                if(arr[i]<arr[i-1])
                {
                    pos = false;
                    break;
                }
                else
                {
                    sec2.pb(arr[i]);
                }
            }
        }
        if(!pos) cout << "-1\n";
        else
        {
            if(sec2.size()==0) cout << "0\n";
            else
            {
                //cout << sec1[0] << " "<< sec2[sec2.size()-1] << endl;
                if(sec1[0]<sec2[sec2.size()-1])
                {
                    cout << "-1\n";
                }
                else cout << sec2.size()<<endl;
            }
        }
    }
    return 0;
}
