/// Bismillahir Rahmanir Rahim
/* Author: Mohammad Morsalin (aka white_space)
    Dept of ICE, NSTU
*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define ALL(v) v.begin(),v.end()
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define PI acos(-1)
#define IOS ios::sync_with_stdio(false);
using namespace std;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
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
    while(cin>>n){
        int arr[n];
        int neg1=-1,neg2=-1,neg3=-1;
        int pos=-1;
        int z=-1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0){ if(neg1==-1)neg1=i;else if(neg2==-1)neg2=i;else if(neg3==-1)neg3=i;}
            else if(arr[i]>0) pos=i;
            else z=i;
        }
        cout << 1 << " "<< arr[neg1]<<endl;
        arr[neg1]=highest(int);
        if(pos!=-1){
            cout << 1 << " " << arr[pos]<<endl;
            arr[pos] = highest(int);
        }
        else if(neg2!=-1 && neg3!=-1){
            cout << 2 << " "<< arr[neg2] << " "<< arr[neg3] <<endl;
            arr[neg2]=highest(int);
            arr[neg3]=highest(int);
        }
        if(pos!=-1) cout << (n-2) << " ";
        else cout << (n-3) << " ";
        for(int i=0;i<n;i++){
            if(arr[i]==highest(int))continue;
            cout << arr[i] << " ";
        }
        cout <<endl;
    }
    return 0;
}
///Alhamdulillah
