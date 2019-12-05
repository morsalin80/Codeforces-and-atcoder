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
int arr[26];
int size[26];
int root(int i)
{
    while(arr[i]!=i)
    {
        i = arr[arr[i]];
        i = arr[i];
    }
    return i;
}
void uni(int a,int b)
{
    int root_a = root(a);
    int root_b = root(b);

    if(root_a==root_b) return;
    if(size[root_a]<size[root_b])
    {
        arr[root_a] = arr[root_b];
        size[root_b]+=arr[root_a];
    }
    else{
        arr[root_b] = arr[root_a];
        size[root_a] += arr[root_b];
    }
}
int main()
{
	IOS
    int n;
    cin>>n;
    for(int i=0;i<26;i++){arr[i] = -1;size[i]=1;}
    while(n--)
    {
        string s;
        cin>>s;
        if(arr[s[0]-'a']==-1) {arr[s[0]-'a']=s[0]-'a';}
        for(int i=1;i<s.size();i++)
        {
            if(arr[s[i]-'a']==-1){arr[s[i]-'a']=s[i]-'a';}
          //  cout << s << endl;
            uni(s[i-1]-'a',s[i]-'a');
        }
    }
    set<int>st;
    for(int i=0;i<26;i++){
        if(arr[i]!=-1)st.ins(root(i));
        //cout << arr[i] << " ";
    }
    cout << st.size() << endl;
    return 0;
}
///Alhamdulillah
