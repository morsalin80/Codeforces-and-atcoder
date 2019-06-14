#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int leftt(string s)
{
    int l=0,f=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
            f++;
        else
            l++;
        if(l>f) return -1;
    }

    return f-l;
}
int rightt(string s)
{
    int l = 0,f=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='(')
            f++;
        else
            l++;
        if(f>l)
        return -1;
    }
    return l-f;
}
int main()
{
    int n;
    cin>>n;
    ll lf[500000],rt[500000];
    ms(lf);
    ms(rt);
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(leftt(s)!=-1)
        {
            lf[leftt(s)]++;
        }
        if(rightt(s)!=-1)
        {
            rt[rightt(s)]++;
        }
    }
    ll sum = 0;
    for(int i=0;i<500000;i++){
        sum+=(lf[i]*rt[i]);
    }
    cout << sum <<endl;
    return 0;
}

