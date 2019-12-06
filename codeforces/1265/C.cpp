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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int dont_get_prize = ceil((double)n/(double)2);
        int last=n-dont_get_prize-1;
        //cout << "last : "<< last << endl;
        for(int i=last;i>0;i--)
        {
          //  cout << "inside: "<< i << endl;
            last = i;
            if(arr[i+1]!=arr[i])
            {

                break;
            }
            dont_get_prize++;
        }
        //cout << "last : "<< last << endl;
        int g=1,s=1,b=0;
        int left=0;
        for(int i=1;i<last;i++)
        {
            left = i;
          //  cout << arr[i] << " "<< arr[i-1] << endl;
            if(arr[i]!=arr[i-1])
            {
                break;
            }
            g++;

        }
        //cout << "left :"<< left << endl;
        for(int i=left+1;i<last;i++)
        {
            left = i;
            if(arr[i]!=arr[i-1]){
                if(s>g){break;}
            }
            s++;
        }
        b = (last-left)+1;
        int all = g+s+b;
        //cout << "dont: "<< dont_get_prize << endl;
        //cout << "all: "<< all << endl;
        //cout << g << " "<< s << " "<< b << endl;
        if(all+dont_get_prize>n) cout << "0 0 0\n";
        else if(g>=s || g>=b) cout<< "0 0 0\n";
		else if(g==0 || s==0 || b==0) cout << "0 0 0\n";
		else cout << g << " "<< s << " "<< b << endl;
    }
    return 0;
}
///Alhamdulillah
