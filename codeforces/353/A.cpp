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
        int sum1=0,sum2=0;
        bool odd_even=false,even_odd = false;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            sum1+=x;
            sum2+=y;
            if(x%2!=0 && y%2==0){
                odd_even = true;
            }
            else if(x%2==0 && y%2!=0){
                even_odd = true;
            }
        }
        //cout << sum1 << " "<< sum2 <<endl;
        int ans = 0;
        if(sum1%2!=0 && sum2%2!=0)
        {
            if(even_odd || odd_even){
                cout << "1\n";
            }
            else
                cout << "-1\n";
        }
        else if(sum1%2==0 && sum2%2==0)
            cout << "0\n";
        else
            cout << "-1\n";
    }
    return 0;
}
