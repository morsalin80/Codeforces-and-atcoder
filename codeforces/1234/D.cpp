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
const int maxn = (int)2e5+5;
int tree[26][maxn],n;
void update(int t,int pos,int val){
    while(pos<=n)
    {
        tree[t][pos]+=val;
        pos += (pos & -pos);
    }
}
int sum(int t,int pos)
{
    int sum = 0;
    while(pos>0)
    {
        sum+=tree[t][pos];
        pos -= (pos & -pos);
    }
    return sum ;
}
int main()
{
	IOS
    string s;
    cin>>s;
    n = s.size();
    s = '1'+s;
    for(int i=1;i<=n;i++)
    {
        update(s[i]-'a' , i , 1);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            int pos;
            char c;
            cin>>pos>>c;
            update(s[pos]-'a',pos,-1);
            s[pos] = c;
            update(s[pos]-'a',pos,1);
        }
        else if(a==2)
        {
            int l,r;
            cin>>l>>r;
            int ans = 0;
            for(int i=0;i<26;i++)
            {
                if(sum(i,r)-sum(i,l-1)>0) ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}

