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
    int q;
    cin>>q;
    while(q--)
    {
        string s,t;
        cin>>s>>t;
        int sl[26],tl[26];
        ms(sl);ms(tl);
        for(int i=0;i<s.size();i++)
        {
            sl[s[i]-'a']++;
            tl[t[i]-'a']++;
        }
        bool pos = false;
        for(int i=0;i<26;i++)
        {
            if(sl[i]>0 &&tl[i]>0){
                pos = true;
                break;
            }
        }
        if(pos)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
